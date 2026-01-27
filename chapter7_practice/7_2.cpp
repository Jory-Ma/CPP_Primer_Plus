#include <iostream>
using namespace std;

const int MAX =10;   //最多允许输入10个分数

int input_score(float *);
void show_score(const float *, int);
void calculate_average(const float *, int);

int main()
{
    float score[MAX];
    int num;   //记录分数个数
    num = input_score(score);
    show_score(score, num);
    calculate_average(score, num);



    return 0;
}

int input_score(float *score)
{
    float input;   //用于接收输入分数
    cout << "You can enter up to 10 golf scores!" << endl;
    cout << "and you can end the input early by typing 0" << endl;
    cout << "Pleasenter the first score: ";
    cin >> input;

    int i = 0;   //输入的分数个数

    while (input != 0 && i < MAX)
    {
        //cin.ignore();  //清空输入缓冲区
        score[i++] = input;
        cout << "Enter the next score or 0: ";
        cin >> input;
    }
    return i;   //返回分数个数
    
}

void show_score(const float *score, int n)
{
    cout << "The scores you entered are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << score[i] << "\t";
    }
    cout << endl;
}

void calculate_average(const float *score, int n)
{
    float average, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += score[i];
    }
    average = sum / n;
    cout << "the average is: " << average << endl;
}