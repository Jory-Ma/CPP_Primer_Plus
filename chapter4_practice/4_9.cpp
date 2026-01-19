#include <iostream>
#include <string>
using namespace std;

struct CandyBar{    // define a struct CandyBar
    string brand;
    float weight;
    int calories;
};

int main()
{
    CandyBar* snack = new CandyBar[3];  //apply dynamic memory allocation

    //initialize the snack array
    snack[0] = {"Mocha Munch", 2.3, 350};
    snack[1] = {"Frootloops", 2.5, 400};
    snack[2] = {"Snickers", 2.7, 450};

    //display the snack information
    cout << "My 1st favorite CandyBar is " << snack[0].brand << "." << endl;
    cout << "And its weight is " << snack[0].weight << ", calorie is " ;
    cout << snack[0].calories << "." <<endl;
    cout << "My 2nd favorite CandyBar is " << snack[1].brand << "." << endl;
    cout << "And its weight is " << snack[1].weight << ", calorie is ";
    cout << snack[1].calories << "." <<endl;
    cout << "My 3rd favorite CandyBar is " << snack[2].brand << "." << endl;
    cout << "And its weight is " << snack[2].weight << ", calorie is ";
    cout << snack[2].calories << "." <<endl;

    delete[] snack;  // release the dynamic memory allocation


    return 0;
}