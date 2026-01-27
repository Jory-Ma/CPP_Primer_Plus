#include <iostream>
using namespace std;

const int Max = 5;

double * fill_array(double *, double *);
void show_array(double *, double *);
void revalue(double, double *, double *);

int main()
{
    double properties[Max];

    double *p = fill_array(properties, properties + Max);//properties+Max 为数组最后一个元素的后面；
    show_array(properties, p);

    if (properties != p)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, p);
        show_array(properties, p);
    }
    cout << "Done.\n";

    return 0;
}

double * fill_array(double * begin, double *end)
{
    double temp;
    int i = 0;
    double *p;
    for (p = begin; p != end; p++,i++)
    {
        cout << "Enter value #" << i+1 << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        *p = temp;
    }
    return p-1;   //返回指向数组最后一个元素的指针
}

void show_array(double *begin, double *end)
{
    int i = 1;
    while (begin != end + 1)
    {
        cout << "Properties #" << i << " $" << *begin << endl;
        i++;
        begin++;
    }
}

void revalue(double r, double *begin, double *end)
{
    while (begin != end + 1)
    {
        *begin *= r;
        begin++;
    }
}