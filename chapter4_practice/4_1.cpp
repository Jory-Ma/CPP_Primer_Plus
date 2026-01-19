#include <iostream>
using namespace std;

struct stuInformation{    // define a structure
    char first_name[20];
    char last_name[20];
    char letter_grade;
    int age;
};

int main()
{
    stuInformation student1;  // create a structure variable

    // get input from user and store it in the structure variable
    cout << "What is your first name? " ;
    cin.getline(student1.first_name, 20);
    
    cout << "What is your last name? ";
    cin.getline(student1.last_name, 20);
    
    cout << "What letter grade do you deserve? ";
    cin >> student1.letter_grade;

    cout << "What is your age? ";
    cin >> student1.age;

    // display the information stored in the structure variable
    cout << "Name " << student1.last_name <<" , " << student1.first_name << endl;
    cout << "Grade: " << char (student1.letter_grade + 1) << endl;
    cout << "Age: " << student1.age << endl;

    return 0;
}