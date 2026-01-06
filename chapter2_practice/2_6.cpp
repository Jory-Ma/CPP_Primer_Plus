#include <iostream>
using namespace std;

double function(double);

int main(void)
{
    double value;
    cout << "Enter the number of light years: ";
    cin >> value;
    cout << value << " light years =  " << function(value) << " astronomical units." << endl;

    return 0;
}

double function(double value)
{
    return value * 63240;
}