#include <iostream>
using namespace std;

const float HKM_TO_MILE = 62.14;
const float GALLON_TO_LITRE = 3.785;

int main()
{
    float eu_fuel_consume, us_fuel_consume;
    float gallons;

    cout << "Enter the fuel consume(L/100KM): ";
    cin >> eu_fuel_consume;
    
    gallons = eu_fuel_consume / GALLON_TO_LITRE;
    us_fuel_consume = HKM_TO_MILE / gallons;

    cout << "The fuel consume is: " << us_fuel_consume << "mpg(miles/gallon)." << endl;
    
    return 0;
}