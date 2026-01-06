#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string name;
    string address;

    cout << "请输入你的姓名：" ;
    //cin >> name;
    //getline读取一整行，包括空格；
    getline(cin, name);
    cout <<"请输入你的地址：";
    //cin >> address;
    getline(cin, address);

    cout << "你的姓名为：" << name << endl;
    cout << "你的地址为：" << address << endl;

    return 0;
}