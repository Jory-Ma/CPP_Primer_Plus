#include <iostream>
using namespace std;

struct Pizza    // define a structure for a pizza
{
    char company[50];
    float diameter;
    float weight;
};


int main()
{
    Pizza PizzaA;   // create a Pizza object

    // get the information from the user
    cout << "Enter the name of the pizza company: ";
    cin.getline(PizzaA.company,50);

    cout << "Enter the diameterof the pizza in inches: ";
    cin >> PizzaA.diameter;

    cout << "Enter the weight of the pizza in pounds: ";
    cin >> PizzaA.weight;

    // display the information
    cout << "the company name of the pizza is: " << PizzaA.company << "." << endl;
    cout << "the diameter of the pizza is: " << PizzaA.diameter << " inches." << endl;
    cout << "the weight of the pizza is: " << PizzaA.weight << " pounds." << endl;

    return 0;
}