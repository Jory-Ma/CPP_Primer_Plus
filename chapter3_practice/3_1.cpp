#include <iostream>    //包含iostream头文件
using namespace std;   //使用命名空间std

const  int FOOT_TO_INCH = 12;  //定义符号常量，定义后不能修改

int main()
{
    // 输入身高并转换为英尺和英寸
    int height;    //声明变量height

    cout << "Enter your height in inches: _\b";    //提示输入身高
    cin >> height;    //从键盘输入身高

    cout << "Your height in feet and inches is " << height / FOOT_TO_INCH;//输出身高的英尺和英寸
    cout << " feet and " << height % FOOT_TO_INCH << " inches." << endl;
    
    return 0;

}