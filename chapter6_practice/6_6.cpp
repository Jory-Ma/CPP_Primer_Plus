#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct patron
{
    string name;
    double fund;
};

//成员信息输入函数声明
void input_patron(vector<patron>& patron_list, int num_patrons);

//捐款超过10000的成员信息输出函数声明
void grand_patrons(const vector<patron> patron_list, int num_patrons);

//列出其他捐款成员信息函数声明
void other_patrons(const vector<patron> patron_list, int num_patrons);

int main()
{
    int num_patrons;
    cout << "Enter the number of patron: ";
    cin >> num_patrons;
    cin.ignore();
    vector<patron> patron_list(num_patrons);

    input_patron(patron_list, num_patrons);       //输入捐献者成员信息

    grand_patrons(patron_list, num_patrons);      //输出捐款超过10000的成员信息
    other_patrons(patron_list, num_patrons);     //输出其他捐款成员信息

    return 0;
}

//成员信息输入函数实现
void input_patron(vector<patron>& patron_list, int num_patrons)
{
     for (int i = 0; i < num_patrons; i++)
    {
        cout << "Enter patron" << i+1 << "'s name: ";
        getline(cin, patron_list[i].name);
        cout << "Enter patron" << i+1 << "'s fund: ";
        cin >> patron_list[i].fund;
        cin.ignore();   //清空输入缓冲区
    }
}

//捐款超过10000的成员信息输出
void grand_patrons( const vector<patron> patron_list, int num_patrons)
{
    cout << "Grand Patrons" << endl;
    int count = 0;   //记录捐款超过10000的成员数量
    for (int i = 0; i < num_patrons; i++)
    {
        if (patron_list[i].fund > 10000)
        {
            count++;
            cout << "Name: " << patron_list[i].name << "\t\t";
            cout << "Fund: " << patron_list[i].fund << endl;
        }
        
    }
    if (count == 0)
        cout << "NONE" << endl;
}

//列出其他捐款成员信息
void other_patrons(const vector<patron> patron_list, int num_patrons)
{
    cout << "Patrons" << endl;
    int count = 0;   //记录捐款小于等于10000的成员数量
    for (int i = 0; i < num_patrons; i++)
    {
        if (patron_list[i].fund <= 10000)
        {
            count++;
            cout << "Name: " << patron_list[i].name << "\t\t";
            cout << "Fund: " << patron_list[i].fund << endl;
        }
       
    }
    if (count == 0)
        cout << "None" << endl;
}
