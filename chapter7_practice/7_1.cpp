#include <iostream>

using namespace std;

float calculate(float a, float b)  //计算调和平均数；
{
    return 2.0 * a * b / (a + b);
}

int main()
{
    float a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    while (a && b)
    {
        cout << "The harmonic mean of a and b is: " << calculate(a, b) << endl;
        cout << "Enter a and b: ";
        cin >> a >> b;
    }
    cout << "Bye!" << endl;

    return 0;
}