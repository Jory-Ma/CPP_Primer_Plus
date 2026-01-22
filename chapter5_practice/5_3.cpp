#include <iostream>
using namespace std;

int main()
{
    int num,sum = 0;
    cout << "Enter a num: ";
    cin >> num;

    while (num != 0)
    {
        sum += num;
        cout << "The sum of all input number is: " << sum << endl;


        cout << "Enter a num again: ";
        cin >> num;
    }

    return 0;
}