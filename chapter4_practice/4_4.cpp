#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first_name, last_name, full_name; // declare variables

    // get input from user
    cout << "Enter your first name: ";
    getline(cin, first_name);

    cout << "Enter your last_name: ";
    getline(cin,last_name);

    // concatenate first and last name into full_name
    full_name = last_name + ", " +first_name;
    cout << "Here's the information in a single string: " << full_name << endl;

    return 0;
}