#include <iostream>
using namespace std;

const int size = 20;

int Fill_array(double [], int);
void Show_array(double [], int);
void Reverse_array(double [], int);

int main()
{
    double arr[size];

    //填充数组并显示
    int num = Fill_array(arr, size);
    Show_array(arr, num);

    //反转整个数组并显示
    Reverse_array(arr, num);
    Show_array(arr, num);

    //反转除第一个和最后一个元素的其他元素，并显示
    Reverse_array(&arr[1], num -2);
    Show_array(arr, num);

    return 0;
}

//填充数组
int Fill_array(double arr[], int size)
{
    double input;
    int i;     //填充的元素个数；
    for (i = 0; i < size; i++)
    {
        cout << "Enter element: " << endl; 
        if (cin >> input)
        {
            arr[i] = input;
        }  
        else
        {
            //清除输入错误状态
            cin.clear();
            while (cin.get() != '\n')
                continue;
            //结束for循环，停止输入
            break; 
        }
               
    }
    return i;
}

//显示数组
void Show_array(double arr[], int num)
{
    for (int i = 0; i < num; i++)
        cout << "arr[i] = " << arr[i] << "\t";
    cout << endl;
}

//反转数组
void Reverse_array(double arr[], int num)
{
    int i = 0;   //交换次数
    double temp;
    while (i < num / 2)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + num -1 - i);
        *(arr + num -1 - i) = temp;
        i++;
    }
}