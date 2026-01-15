#include <iostream>
using namespace std;

const int FOOT_TO_INCH = 12;            //符号常量，英尺与英寸的换算常数
const float INCH_TO_METER = 0.0254;     //符号常量，英寸与米的换算常数
const float kilogram_to_pound = 2.2;    //符号常量，千克与磅的换算常数

int main()
{
    int foot, inch;          //声明身高的英尺与英寸变量；
    float pound;             //声明体重的磅变量；

    cout << "Enter your height foot:_\b";
    cin >> foot;
    cout << "Enter your height inch:_\b";
    cin >> inch;
    cout << "Enter your weight in pound:_\b";
    cin >> pound;

    float height_in_meter = (foot * FOOT_TO_INCH + inch) * INCH_TO_METER;   //身高的英寸转换为米；
    float weight_in_kg = pound / kilogram_to_pound;                      //体重的磅转换为千克；
    float BMI = weight_in_kg / (height_in_meter * height_in_meter);      //计算BMI指数；

    cout << "Your BMI is " << BMI << endl;    //输出BMI指数；

    return 0;
}