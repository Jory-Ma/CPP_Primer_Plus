#include <iostream>
#include <cstring>
using namespace std;

const int strsize = 30;
const int usersize = 30;

//姓名结构体
struct bop
{
    char fullname[strsize];  //真实姓名
    char title[strsize];     //头衔
    char bopname[strsize];   //秘密BOP姓名
    int preference;          //0 = fullname, 1 = title, 2 = bopname

};

bop boplist[usersize] = {{"John Doe", "Manager", "BOP", 1},
                      {"Jane Smith", "Assistant Manager", "BOP", 1},
                      {"Tom Johnson", "Secretary", "BOP", 2},
                      {"Mike Lee", "Sales Representative", "BOP", 0},
                      {"Lisa Wang", "Marketing Manager", "BOP", 1}};

void showchoices();               //显示选项函数声明
void displaybyname();             //按真实姓名显示函数声明
void displaybytitle();            //按头衔显示函数声明
void displaybybopname();          //按秘密BOP姓名显示函数声明
void displaybypreference();       //按偏好显示函数声明
void creat_info();

int main()
{
    char choice;    //记录用户选择
    creat_info();   //增加成员信息
    cin.ignore();   //清除creat_info()中的残留缓存

    showchoices();  //显示选项
    cin.get(choice);  //键入选择

    while (choice == 'a' || choice == 'b' || choice == 'c' || choice == 'd')
    {
        switch(choice)
        {
            case 'a':
                displaybyname();
                break;
            case 'b':
                displaybytitle();
                break;
            case 'c':
                displaybybopname();
                break;
            case 'd':
                displaybypreference();
                break;
        }
        cin.get();      //清除enter键
        cout << "Next choice:";
        cin.get(choice);
    }
    if (choice == 'q')
        cout << "Bye!" << endl;
    
    return 0;
}

void showchoices()          //显示选项函数定义
{
    cout << "a. display by name\t\tb. display by title\n";
    cout << "c. display by BOP name\t\td. display by preference\n";
    cout << "q. quit\n";
}

void displaybyname()         //按真实姓名显示函数定义
{
   for (int i = 0; i < usersize; i++)
   {
        if (strlen(boplist[i].fullname) == 0)
            break;
        else
            cout << boplist[i].fullname << endl;
   }
}

void displaybytitle()        //按头衔显示函数定义
{
    for (int i = 0; i < usersize; i++)
    {
        if (strlen(boplist[i].title) == 0)
            break;
        else
            cout <<boplist[i].title << endl;
    }
}

void displaybybopname()      //按秘密BOP姓名显示函数定义
{
    for (int i = 0; i < usersize; i++)
    {
        if (strlen(boplist[i].bopname) == 0)
            break;
        else
            cout << boplist[i].bopname << endl;
    }
}

void displaybypreference()   //按偏好显示函数定义
{
    for(int i = 0; i < usersize; i++)
    {
        if (strlen(boplist[i].fullname) == 0)   //一个成员都没有，谈不上按偏好输出；
            break;
        else{
            if (boplist[i].preference == 0)
                cout << boplist[i].fullname << endl;
            else if (boplist[i].preference == 1)
                cout << boplist[i].title << endl;
            else if (boplist[i].preference == 2)
                cout << boplist[i].bopname << endl;
        }
    }
}

void creat_info()
{
    //计算目前boplist数组中有多少成员
    int count = 0;
    while(count < usersize && strlen(boplist[count].fullname) > 0)
    {
        count++;
    }
    if (count >= usersize)
        return;   //数组已满，不能再添加成员

    //输入新成员信息
    for (int i = count; i < usersize; i++)
    {
        cout << "Please enter the fullname of the new member: ";
        cin.getline(boplist[i].fullname,strsize);
        
        cout << "Please enter the title of the new member: ";
        cin.getline(boplist[i].title,strsize);
      
        cout << "Please enter the BOP name of the new member: ";
        cin.getline(boplist[i].bopname,strsize);

        cout << "Please enter the preference of the new member (0 = fullname, 1 = title, 2 = bopname): ";
        cin >> boplist[i].preference;
        cin.ignore();  //清除enter键
        cout << "新成员添加成功！\n";

        char ch;       //记录是否继续添加成员
        cout << "是否继续添加成员：(y/n) ";
        cin.get(ch);
        if (ch == 'n')
        {
            cout << "退出完成！\n";
            break;
        }
        else if (ch == 'y')
        {
            cout << "请继续添加！\n";
            cin.get();     //清除enter键
            continue;
        }
       
    }
}
   