#include <iostream>
using namespace std;

void function(int hour, int minute);

int main(void)
{
    int hour, minute;

    cout << "Enter the hour: ";
    cin >> hour;
    cout << "Enter the minute: ";
    cin >> minute;

    function(hour, minute);

    return 0;
}

void function(int hour, int minute)
{
    cout << "Enter the number of hours: " << hour << endl;
    cout << "Enter the number of minutes: " << minute << endl;
    cout << "Time: " << hour << " : " << minute << endl;
}