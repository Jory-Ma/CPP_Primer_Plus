#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    float distance;

    cout << "请输入距离（单位为：long）：";
    cin >> distance;

    cout << "你输入的距离为：" << distance << "long" <<endl;
    cout << "转化为码为：" << distance * 220 << "码" <<endl;

    return 0;
}