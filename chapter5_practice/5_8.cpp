#include <iostream>
#include <cstring>
using namespace std;

const int Size = 20;

int main()
{
    char word[Size];
    int count = 0;

    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> word;
    while(strcmp(word,"done"))
    {
        count++;
        cin >> word;
        //cin.get();   可选项
    }

    cout << "you entered a total of " << count << " words." << endl;

    return 0;
}