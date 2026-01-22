#include <iostream>
using namespace std;

int main()
{
    int num_line;
    cout << "Enter the number of rows:";
    cin >> num_line;

    for (int i = 1; i <= num_line; i++)
    {
        for (int j = 1; j <=num_line - i; j++)
        {
            cout << "." ;
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}