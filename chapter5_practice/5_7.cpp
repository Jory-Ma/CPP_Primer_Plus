#include <iostream>
using namespace std;

const int ArSize = 30;

struct car
{
    char manufacturer[ArSize];
    int make_year;
};

int main()
{
    cout << "How many cars do you wish to catalog? ";
    int num_car;
    cin >> num_car;
    cin.get();   //清除空字符

    car* car_list = new car[num_car];
    for (int i = 0; i < num_car; i++)
    {
        cout << "Car #" << i+1 << ":" << endl;
        cout << "Please enter the maker: ";
        cin.get ( car_list[i].manufacturer, ArSize);
        cout << "Please enter the year made: " ;
        cin >> car_list[i].make_year;
        cin.get();   //清除空字符
    }
    cout << "Here is you collection: " << endl;
    for (int i = 0; i < num_car; i++)
    {
        cout << car_list[i].make_year << " " << car_list[i].manufacturer << endl;
    }



    return 0;
}