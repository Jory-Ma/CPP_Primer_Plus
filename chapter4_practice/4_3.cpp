#include <iostream>
#include <cstring>
using namespace std;

const int Size = 20;   // size of each name string

int main()
{
    // declare and initialize character arrays for first and last name
    char first_name[Size];
    char last_name[Size];
    char full_name[Size * 2];

    // get input from user
    cout << "Enter your first name: ";
    cin.getline(first_name, Size);
    cout << "Enter your last name: ";
    cin.getline(last_name, Size);

    // concatenate first and last name into full_name string
    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);

    // output full_name string
    cout << "Here's the information in a single string: " << full_name << endl;

    return 0;
}