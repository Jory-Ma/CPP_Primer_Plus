#include <iostream>
using namespace std;

int main()
{
    const char* month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",  "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    int sale_amount[12];
    int sale_sum = 0;
    for (int i = 0; i < 12; i++)
    {
        cout << "Enter the sale amount of " << month[i] << ": ";
        cin >> sale_amount[i];
    }
    for (int i = 0; i < 12; i++) 
    {
        cout << month[i] << " sale amount: " << sale_amount[i] << endl;
        sale_sum += sale_amount[i];
    }
    cout << "The total sale amount is: " << sale_sum << endl;

    return 0;
}