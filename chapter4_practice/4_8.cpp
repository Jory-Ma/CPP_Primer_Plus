#include <iostream>
using namespace std;

struct Pizza  // define the structure of Pizza
{
    char company[50];
    float diameter;
    float weight;
};

int main()
{
    Pizza* PPizza = new Pizza;  // apply dynamic memory allocation to PPizza

    // input the information of the pizza
    cout << "Enter the diameter of the pizza in inches: ";
    cin >> PPizza -> diameter;
    cin.get();     // to clear the buffer

    cout << "Enter the company name of the pizza: ";
    cin.getline(PPizza -> company, 50);

    cout << "Enter the weight of the pizza in pound: ";
    cin >> PPizza ->  weight;

    // output the information of the pizza
    cout << "The company name of the pizza is: " << PPizza -> company << "." << endl;
    cout << "The diameter of the pizza is: " << PPizza -> diameter << " inches." << endl;
    cout << "The weight of the pizza is: " << PPizza -> weight << " pounds." << endl;

    delete PPizza;     // release the dynamic memory allocation

    return 0;
}