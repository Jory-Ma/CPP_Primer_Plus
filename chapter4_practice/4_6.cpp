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
    CandyBar snack[3] = {{"Mocha Munch", 2.3, 350},
                        {"Snickers", 2.5, 400},
                        {"Kit Kat", 2.2, 300}};  // create an array of 3 CandyBar objects

    // print out the information of each CandyBar object in the array
    cout << "My 1st favorite CandyBar is " << snack[0].brand << "." << endl;
    cout << "And its weight is " << snack[0].weight << ", calorie is " ;
    cout << snack[0].calories << "." <<endl;

    cout << "My 2nd favorite CandyBar is " << snack[1].brand << "." << endl;
    cout << "And its weight is " << snack[1].weight << ", calorie is ";
    cout << snack[1].calories << "." <<endl;

    cout << "My 3rd favorite CandyBar is " << snack[2].brand << "." << endl;
    cout << "And its weight is " << snack[2].weight << ", calorie is ";
    cout << snack[2].calories << "." <<endl;
    

    return 0;
}