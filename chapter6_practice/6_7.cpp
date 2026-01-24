#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

//需改进：当输入带有标点符号的一句话时，标点符号前的单词被认为不是单词；

const int MAX_SIZE = 100;

int main()
{
    //num1记录元音字母开头的单词数，num2记录辅音字母开头的单词数，num3记录字符开头的单词数
    int num1 = 0, num2 = 0, num3 = 0;
    vector<string> words(MAX_SIZE);
    vector<bool> is_word(MAX_SIZE);   //记录是否是单词

    cout << "Enter words (q to quit): " << endl;

    for (int i = 0; i < MAX_SIZE; i++)
    {
        cin >> words[i];
        is_word[i] = true;  //假定所有字符串均为单词

        if (words[i].size() == 1 && words[i] == "q")
        {
            is_word[i] = false;
            break;
        }
           
        //for循环用于检测整个字符串不都是由字母构成,即不是单词
        for (char ch : words[i])
        {
            if (!(isalpha(ch)))
            {
                is_word[i] = false;
                num3++;
                break;
            }    
        }

        if (is_word[i] == true)
        {
            if (words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0] == 'u'){
                 num1++;
            }
               
            else
            {
                num2++;
            }
                
        }
        
    }

    cout << num1 << " words beginning with vowels" << endl;
    cout << num2 << " words beginning with consonants" << endl;
    cout << num3 << " words not beginning with letters" << endl;
    
    return 0;
}