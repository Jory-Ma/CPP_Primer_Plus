#include <iostream>
using namespace std;

int main()
{
    int first,last,sum = 0;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the lasrt number: ";
    cin >> last;

    for(int i = first; i <= last; i++)
    {
        sum += i;
    }    

    cout << "The sum of " << first <<" +...+ " << last << " is " << sum << endl;

    return 0;
}