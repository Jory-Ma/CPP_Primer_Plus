#include <iostream>
#include <cmath>
using namespace std;

const float Da_Interest_Rate = 0.1;
const float Co_Interest_Rate = 0.05;
const float Init_dollar = 100;

int main()
{
    int year;
    float Da_sum = Init_dollar;
    float Co_sum = Init_dollar;
    
    for (year = 0; Co_sum <= Da_sum; year++)
    {
        Da_sum = Init_dollar + (Init_dollar * Da_Interest_Rate * year);
        Co_sum = Init_dollar * pow(1 + Co_Interest_Rate, year);
    }

    cout << "after " << year << " years, the Co_sum beyond the Da_sum." << endl;
    cout << "Da_sum: " << Da_sum << endl;
    cout << "Co_sum: " << Co_sum << endl;
    

    return 0;
}