#include <iostream>   //包含iostream头文件
using namespace std;  //使用命名空间std

const int DEGREE_TO_MINUTE = 60;  // 60 minutes in 1 degree
const int MINUTE_TO_SECOND = 60;  // 60 seconds in 1 minute

int main()
{
    int degrees,minutes,seconds;  //声明度、分、秒变量
    float Latitude_degree;               //声明度纬度变量

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degree:";
    cin >> degrees;
    cout << "Next, enter the minutes of arc:";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc:";
    cin >> seconds;

    Latitude_degree = degrees + float(minutes) / DEGREE_TO_MINUTE + 
                float(seconds) / (DEGREE_TO_MINUTE * MINUTE_TO_SECOND);  //计算纬度的度数

    cout << degrees << " degrees, " << minutes << " minutes, "
         <<seconds << " seconds = " << Latitude_degree << " degrees" << endl;

    return 0;
}
