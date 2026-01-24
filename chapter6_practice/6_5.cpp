#include <iostream>
using namespace std;

int main()
{
     float tax, salary = 0.;  //将salary初始化后，对于cin >>salary;输入非数字时，保持初始值不变；
     cout << "Enter your salary: ";
     cin >> salary;

     while (salary > 0)
     {
        if (salary <= 5000)
            tax = 0;
        else if (salary >= 5001 && salary <= 15000)
            tax = (salary - 5000) * 0.10;
        else if (salary >=15001 && salary <=35000)
            tax = 10000 * 0.10 + (salary - 15000) * 0.15;
        else 
            tax = 10000 * 0.10 + 20000 * 0.15 + (salary - 35000) * 0.20;

        cout << "Your tax is: " << tax << endl;
        cout << "Enter your salary: ";
        cin >> salary;
     }

     cout << "Bye!" << endl;

     


    return 0;
}