#include <iostream>
using namespace std;

float function(float);

int main(void)
{
    float value;
    cout << "Please enter a Celsius value: ";
    cin >> value;
    cout << value << " degrees Celsius is " << function(value) << " degrees Fahrenheit." << endl;

    return 0;
}

float function(float value)
{
    return value *1.8 + 32.0;
}