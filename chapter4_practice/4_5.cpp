#include <iostream>
#include <string>
using namespace std;

struct CandyBar{     // define a struct for candy bar
    string brand;
    float weight;
    int calories;
};


int main()
{
    CandyBar snack = {"Mocha Munch", 2.3, 350};  // create a candy bar object

    // print the information of the candy bar
    cout << "My favorite CandyBar is " << snack.brand << "." << endl;
    cout << "And its weight is " << snack.weight << ", calories is " << snack.calories;
    cout << "." << endl;


    return 0;
}