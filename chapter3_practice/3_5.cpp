#include <iostream>
using namespace std;

int main()
{
    long long global_amount, american_amount;
    double population_percent;

    cout << "Enter the world's population: ";
    cin >> global_amount;
    cout << "Enter the population of US: ";
    cin >> american_amount;

    population_percent = (double)american_amount / global_amount * 100;//按百分数显示

    cout << "The population of US is " << population_percent << "% of the world population,"<<endl;

    return 0;
}