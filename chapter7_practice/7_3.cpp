#include <iostream>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void set_volume(box *);
void show(box);


int main()
{
    box mybox = {"ABC", 10.5, 20.5, 30.5};

    set_volume(&mybox);
    show (mybox);

    return 0;
}

//将volume设置为其他三位的乘积
void set_volume(box *a)  
{
    a->volume = a->height * a->width * a->length;
}

//按值传递显示
void show(box a)
{
    cout << a.maker << endl;
    cout << a.height << endl;
    cout << a.width << endl;
    cout << a.length << endl;
    cout << a.volume << endl;
}