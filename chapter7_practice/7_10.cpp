#include <iostream>
using namespace std;


double add (double, double);
double sub (double, double);
double min (double, double);
double max (double, double);
double calculate (double, double, double (*pf)(double, double));

int main()
{
    double x, y;
    cout << "Enter x and y: ";

    
    while (cin >> x >> y)
    {
        double (*pf[4])(double, double) = {add, sub, min, max};
        
        int i = 0;
        while (i < 4)
        {
            double re = calculate(x, y, pf[i]);
            cout << re << endl;
            i++;
        }
        cout << "Enter x and y: ";
    }


    return 0;
}

double add (double x, double y)
{
    return x + y;
}
double sub (double x, double y)
{
    return x - y;
}
double min(double x, double y)
{
    return x > y ? y : x;
}
double max(double x, double y)
{
    return x > y ? x : y;
}

double calculate (double x, double y, double (*pf)(double, double))
{
   return (*pf) (x, y);
}
