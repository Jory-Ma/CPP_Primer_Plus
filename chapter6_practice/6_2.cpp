/*编写一个程序，最多将10个donation值读入一个double类型数组中（也可以使用array类），
在程序遇到非数字输入时将结束输入，并报告这些数字的平均值 以及数组中有多少个数字大于平均值*/

#include <iostream>
#include <array>
using namespace std;

const int MAX_SIZE = 10;
int main()
{
    array<double, MAX_SIZE> donation;   //使用array模板定义数组
    double input;                       //输入
    int count = 0;                      //输入的数字个数
    double sum = 0, average;            //输入的数字的和和平均值

    //当输入非数字时或MAX_SIZE个数字输入完毕时，循环结束
    //cin>>input,本身会返回cin对象，若输入失败（非数字），则cin会被转化为false,成功则为true；
    while ((cin >> input) && count < MAX_SIZE) 
    {
        donation[count++] = input;
        sum +=input;                    //每次输入进行求和；
    }

    average = sum / count;              //求平均值；
    int num = 0;                        //num为大于平均值的数字个数

    for(int i = 0; i < count; i++)      //i为数组下标；
    {
        if (donation[i] > average)
            num++;
    }
    
    //输出
    cout << "The average of the donation is: " << average << endl;
    cout << "The number of donation greater than the average is: " << num << endl;

    return 0;
}