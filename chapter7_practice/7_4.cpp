#include <iostream>
using namespace std;

long double probability(int f, int s, int n);

int main()
{
    cout << "Field number is 45, and special number is 27." << endl;
    cout << "the probability is one of the: " << probability(45, 27, 5) << endl;

    return 0;
}

long double probability(int f, int s, int n)
{
    long double pro, re = 1;
    for (int i = n, p = 0; i > 0; i--,p++)
    {
        re = re * (f-p) / i;
    }
    pro = re / s;
    return pro;       //返回中奖几率；
}