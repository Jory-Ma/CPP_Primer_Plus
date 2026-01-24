/*
编写一个程序，读取键盘输入，直到遇到@符号为止，并回显输入（数字除外），
同时将大写字符转化为小写，将小写字符转化为大写（别忘了cctype函数系列）；*/

#include <iostream>
#include <cctype>     //为了使用isdigit、isupper、islower、tolower、toupper函数

using namespace std;

int main()
{
    char ch;

    while((ch = cin.get()) != '@')
    {
        if(isdigit(ch))
            continue;
        else if (isupper(ch))  //isupper函数：如果参数是大写字母返回true，否则返回false
        {
            ch = tolower(ch);  //tolower函数：将大写字母转化为小写字母
        }
        else if (islower(ch))  //islower函数：如果参数是小写字母返回true，否则返回false
        {
            ch = toupper(ch);  //toupper函数：将小写字母转化为大写字母
        }
        cout << ch;
    }

    return 0;
}