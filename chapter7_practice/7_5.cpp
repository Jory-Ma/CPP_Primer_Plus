#include <iostream>
using namespace std;

int function(int a)
{
    if (a == 0)
        return 1;
    else
        return a * function(a-1);
}

int main()
{
    int a;
    
    cout << "Enter a: ";
    while(cin >> a)
    {
        cout << "a! = " << function(a) << endl;
        cout << "Enter a: ";
    }
   

    return 0;
}