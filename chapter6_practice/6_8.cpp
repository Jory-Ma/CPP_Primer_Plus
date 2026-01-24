#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin;
    string file_name;
    cout << "Enter the file name: ";
    getline(cin, file_name);    //等待用户输入文件名

    fin.open(file_name);    //打开文件

    if (!fin.is_open())     //打开错误，则终止程序；
    {
        cout << "Error: Cannot open file " << file_name << endl;
        exit(EXIT_FAILURE);
    }

    char read_char;
    int count = 0;

    while (!fin.eof())
    {
        fin >> read_char;
        count++;
    }
    cout << "The file " << file_name << " contains " << count << " characters." << endl;

    fin.close();    //关闭文件

    return 0;
}