#include <iostream>
#include <array>
using namespace std;

int main()
{
    const int num = 3;
    array<float, num> record_list;
    float average;

    // Input the three records
    cout << "Enter first recond: ";
    cin >>  record_list[0];

    cout << "Enter second recond: ";
    cin >> record_list[1];

    cout << "Enter third recond: ";
    cin >> record_list[2];

    // Calculate the average
    average = (record_list[0] + record_list[1] + record_list[2]) / num;

    // Output the results
    cout << "The first record is: " << record_list[0] << endl;
    cout << "The second record is: " << record_list[1] << endl;
    cout << "The third record is: " << record_list[2] << endl;
    cout << "The average of the three records is: " << average << endl;

    return 0;
}