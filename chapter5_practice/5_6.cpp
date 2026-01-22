#include <iostream>
#include <string>
using namespace std;

int main()
{
    string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    int sale_amount[3][12];  //利用二位数组表示三年内每月的销售量
    int sale_year[3] = {0};   //每年的销售量
    
    for (int i = 0; i< 3; i++)
    {
        cout << "Enter the " << i + 1 << " year's sales for each month: " << endl;
        for (int j = 0; j < 12; j++)
        {
            cout << "the sale amount of " << month[j] << " is: ";
            cin >> sale_amount[i][j];
            sale_year[i] += sale_amount[i][j];  //累加每年的销售量
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
         cout << "The total sales for the " << i + 1 << " year is: " << sale_year[i] << endl;
    }
    int sale_sum = sale_year[0] + sale_year[1] + sale_year[2];  //总销售量
    cout << "The total sales for the three years is: " << sale_sum << endl;


    return 0;
}