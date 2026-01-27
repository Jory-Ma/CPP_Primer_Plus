#include <iostream>
using namespace std;

const int size = 4;

//char *seasons[4]表示声明一个由4个指向char的指针组成的数组；不能通过*season[0]等修改数据；
//char (*seasons)[4]表示由4个char组成的数组的指针；
const char *seasons[size] = {"Spring", "Summer", "Fall", "Winter"};

struct sea_ex
{
    double expenses[size];
};

void fill1 (double (*expenses)[size]);
void show1 (double *);

void fill2 (sea_ex *);
void show2 (sea_ex);

int main()
{
    double expenses[size];
    fill1 (&expenses);  //&expenses表示由size个double组成的数组的地址
    show1 (expenses);   //expenses表示expenses[0]的地址

    cout << endl << endl;

    sea_ex a;
    fill2 (&a);
    show2 (a);

    return 0;

}

void fill1 (double (*expenses)[size])
{
    for ( int i = 0; i < size; i++)
    {
        cout << "Enter " << *seasons[i] << " expenses: ";
        cin >> (*expenses)[i];
    }

}

void show1 (double *expenses)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < size; i++)
    {
        cout << *seasons[i] << ": $" << expenses[i] << endl;
        total += expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

void fill2 (sea_ex *a)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << *seasons[i] << "expenses: ";
        cin >> a -> expenses[i];
    }
}

void show2 (sea_ex a)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < size; i++)
    {
        cout << *seasons[i] << ": $" << a.expenses[i] << endl;
        total += a.expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}