/*
编写一个菜单驱动程序的雏形。该程序显示一个提供4个选项的菜单——每个选项用一个字母标记，如果用户使用有效选项之外
的字母进行响应，程序将提示用户输入一个有效的字母，直到用户这样做为止，然后，该程序使用一条switch语句，根据用户
的选择执行一个简单操作，该程序的运行情况如下：
Please enter one of the following choices:
c) carnivore        p) pianist
t) tree             g) game
f
Please enter a c, p, t, or g: q
Please enter a c, p, t, or g: t
A maple is a tree.
*/

#include <iostream>
using namespace std;

void showmean();       //声明函数showmean

int main()
{
    char choice;            //接收用户输入的选项
    showmean();
    cin.get(choice);
    while (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g')
    {
        cin.get();          //清除输入缓冲区中的enter字符
        cout << "Please enter a c, p,t, or g: ";
        cin.get(choice);
    }
    switch(choice)
    {
        case 'c':
            break;
        case 'p':
            break;
        case 't':
            cout << "A maple is a tree.\n";
            break;
        case 'g':
            break;         
    }

}

void showmean()     //负责菜单信息的输出
{
    cout << "Please enter one of the following choices:\n";
    cout << "c) carnivore\t\t\tp) pianist\n";
    cout << "t) tree\t\t\t\tg) game\n";
}