#include <iostream>
using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo (student *, int);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);


int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    
    //清除缓存
    while (cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo (ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1 (ptr_stu[i]);
        display2 (&ptr_stu[i]);
    }
    display3 (ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";

    return 0;
}


int getinfo (student *s, int size)
{   
    int num = 0;

    for (num; num < size; num++)
    {
        cout << "Enter the info of  student name: ";
        cin >> s[num].fullname;
        cout << "Enter the info of student hobby: ";
        cin >> s[num].hobby;
        cout << "Enter the info of student ooplevel: ";
        cin >> s[num].ooplevel;

        if (!cin)
        {
            cin.clear();
            while (cin.get() !='\n')
                continue;
            cout << "Bad input, process terminated" << endl;
            break;
        }
    }
    return num;
}

void display1(student st)
{
    cout << "Student Name: " << st.fullname << endl;
    cout << "Student hobby: " << st.hobby << endl;
    cout << "Student ooplevel: " << st.ooplevel << endl;
}
void display2(const student *ps)
{
    cout << "Student Name: " << ps->fullname << endl;
    cout << "Student hobby: " << ps->hobby << endl;
    cout << "Student ooplevel: " << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Student Name: " << pa[i].fullname << endl;
        cout << "Student hobby: " << pa[i].hobby << endl;
        cout << "Student ooplevel: " << pa[i].ooplevel << endl;
    }
   
}