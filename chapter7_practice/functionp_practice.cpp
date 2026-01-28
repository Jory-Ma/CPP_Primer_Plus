#include <iostream>
using namespace std;

const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);

int main()
{
    double av[3] = {1112.3, 1542.6, 2227.9};
    const double * (*p1) (const double *, int) = f1;

    auto p2 = f2;
    //const double * (*p2) (const double *, int) = f2;

    cout << "Using pointers to function:\n";
    cout << " Address\t\tValue\n";
    cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;          //av地址        1112.3
    cout << p1(av, 3) << ": " << *p1(av, 3) << endl;                //av地址        1112.3
    cout << p2(av, 3) << ": " << *p2(av, 3) << endl;                //av+1地址      1542.6

    //长度为3的函数指针数组；
    const double *(*pa[3]) (const double *, int) = {f1, f2,f3};

    //pb = &pa[0];
    auto pb = pa;
    //const double *(**pb)(const double *, int) = pa;

    cout << "\nUsing an array of points to functions:\n";
    cout << " Address\t\tValue\n";
    for (int i = 0; i < 3; i++)
    {
        cout << (*pa[i])(av, 3) << ": " << *(*pa[i])(av, 3) << endl;    //av+0地址      1112.3  \n  av+0地址        1112.3
        cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;          //av+1地址      1542.6  \n  av+0地址        1542.6
                                                                        //av+2地址      2227.9  \n  av+0地址        2227.9
    }
    cout << "\nUsing a pointer to a pointer to a function:\n";
    cout << " Address\t\tValue\n";
    for (int i = 0; i < 3; i++)
    {
        cout << (*pb[i])(av, 3) << ": " << *(*pb[i])(av, 3) << endl;    //av+0地址      1112.3  \n  av+0地址        1112.3
        cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;          //av+1地址      1542.6  \n  av+0地址        1542.6
                                                                        //av+2地址      2227.9  \n  av+0地址        2227.9
    }

    cout << "\nUsing pointer to an array of pointers:\n";
    cout << " Address\t\tValue\n";
    auto pc = &pa;
    //const double * (*(*pc)[3]) (const double*, int) = &pa;
    cout << (*pc)[0] (av, 3) << ": " << *(*pc)[0] (av, 3) << endl;      //av+0地址      1112.3  
    const double * (*(*pd)[3]) (const double*, int) = &pa;
    const double *pdb = (*pd)[1] (av,3);                                
    cout << pdb << ": " << *pdb << endl;                                //av+1地址      1542.6  
    cout << (*(*pd)[2])(av,3) << ": " << *(*(*pd)[2]) (av,3) << endl;   //av+2地址      2227.9

    return 0;
}

const double * f1 (const double * ar, int n)
{
    return ar;
}
const double * f2 (const double ar[], int n)
{
    return ar+1;
}
const double * f3 (const double ar[], int n)
{
    return ar+2;
}