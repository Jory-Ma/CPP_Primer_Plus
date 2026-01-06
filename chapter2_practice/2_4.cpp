#include <iostream>
using namespace std;

int main(void)
{
    int age;

    cout << "Enter your age: ";
    cin >> age ;

    int days = age * 365;
    cout << "Your age is " << days <<" days" <<endl;

    return 0;
}