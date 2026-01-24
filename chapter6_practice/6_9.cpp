#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>  //用于exit(EXIT_FAILURE)
#include <limits>   // 用于清空缓冲区
#include <iomanip>  //用来使用setw、right等函数格式化输出
using namespace std;

//定义结构体
struct patron
{
    string name;
    double fund;
};

void input_patron_info(vector<patron>& patron_list, ofstream& outfile, int num_patrons);
void output_in_patron(ifstream& infile);

//思路：先创建一个文件进行输入捐献者信息，然后再从文件中读取信息，并输出。
int main()
{
    int num_patrons;           //捐献者数量
    cout << "Enter the number of patron: ";
    cin >> num_patrons;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //彻底清空缓冲区
    vector<patron> patron_list(num_patrons);

    //创建输出流文件
    string ou_filename;           //文件名

    cout << "Enter filename of patron information: ";
    getline(cin,ou_filename);          //等待用户输入文件名

    ofstream outfile;         //创建一个ofstream对象
    outfile.open(ou_filename);   //将文件与ofstream对象关联

    //在文件中输入捐献者信息
    input_patron_info(patron_list, outfile, num_patrons);

    //关闭文件
    outfile.close();

    //创建输入流对象并联结文件及打开文件
    string in_filename;
    cout << "Enter the filename: ";
    getline(cin, in_filename);       //等待用户输入文件名

    ifstream infile;                 //创建一个ifstream对象
    infile.open(in_filename);       //将文件与ifstream对象关联

    if (!infile.is_open())
    {
        cout << "Error: cannot open file " << in_filename << endl;
        exit(EXIT_FAILURE);
    }

    //读取文件中的信息并输出
    output_in_patron(infile);

    //关闭文件
    infile.close();

    return 0;
}

//将捐献者信息输入到文件中
void input_patron_info(vector<patron>& patron_list, ofstream& outfile, int num_patrons)
{
    outfile << num_patrons << endl;     //将捐献者数量写入文件

    //输入捐献者信息
    for (int i = 0; i < num_patrons; i++)
    {
        cout << "Enter name of the new patron: "; 
        getline(cin, patron_list[i].name);   //接收捐献者姓名
        outfile << patron_list[i].name << endl;   //将捐献者姓名写入文件

        cout << "Enter fund of the new patron: ";
        cin >> patron_list[i].fund; 
        outfile << patron_list[i].fund << endl;   //将捐献者资金写入文件
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // 清空 cin >> fund 后的换行符
    }
}


//从文件中读取捐献者信息并输出
void output_in_patron( ifstream& infile)
{
    int num_patrons;
    int ip = 0; //遍历指针
    infile >> num_patrons;
    if (num_patrons <= 0)  //如果捐献者数量小于等于0，则退出程序
    {
        cout << "Error: invalid number of patrons" << endl;
        exit(EXIT_FAILURE);
    }

    infile.ignore(numeric_limits<streamsize>::max(), '\n');  // 清空文件中可能存在的空行
    patron* ppatron = new patron[num_patrons];   //动态分配内存创建patron数组

    while(!infile.eof() && ip < num_patrons)
    {
        getline(infile, ppatron[ip].name);
        cout << "Name: " << ppatron[ip].name;
        infile >> ppatron[ip].fund;
        infile.ignore(numeric_limits<streamsize>::max(), '\n');  // 清空文件中可能存在的空行
        // 固定宽度，让 Fund: 右对齐
        cout << setw(25 - ppatron[ip].name.length()) << right << "Fund: " << ppatron[ip].fund << endl;
        ip++;
    }

    //输出捐款大于10000的捐献者
    cout << "Grand Patrons" << endl;
    int count = 0;   //记录捐款超过10000的成员数量
    for (int i = 0; i < num_patrons; i++)
    {
        if (ppatron[i].fund > 10000)
        {
            count++;
            cout << "Name: " << ppatron[i].name;
            // 固定宽度，让 Fund: 右对齐
            cout << setw(25 - ppatron[i].name.length()) << right << "Fund: " << ppatron[i].fund << endl;
        }
        
    }
    if (count == 0)
        cout << "NONE" << endl;

    //输出其他捐献者
    cout << "Patrons" << endl;
    int count_other = 0;   //记录捐款小于等于10000的成员数量
    for (int i = 0; i < num_patrons; i++)
    {
        if (ppatron[i].fund <= 10000)
        {
            count_other++;
            cout << "Name: " << ppatron[i].name;
            // 固定宽度，让 Fund: 右对齐
            cout << setw(25 - ppatron[i].name.length()) << right << "Fund: " << ppatron[i].fund << endl;
            
        }
       
    }
    if (count_other == 0)
        cout << "NONE" << endl;

    //释放内存
    delete[] ppatron;
    
}