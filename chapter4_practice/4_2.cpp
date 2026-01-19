#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Define constants
    const int ArSize = 20;
    // Declare variables
    string name;
    string dessert;

    // Get user input
    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);

    // Output message
    cout << "I have some delicious " << dessert;
    cout <<  " for you, " << name << ".\n";

    return 0;
}