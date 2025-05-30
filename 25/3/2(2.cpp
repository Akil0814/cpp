//计时器
#include <iostream>
#include <chrono>
using namespace std;

int main()
{
    // 静态成员函数chrono::steady_clock::now()获取开始的时间点
    chrono::steady_clock::time_point start=chrono::steady_clock::now();
    //auto start = chrono::steady_clock::now();

    // 执行一些代码，让它消耗一些时间。
    cout << "计时开始 ...... \n";
    for (int ii = 0; ii < 1000000; ii++) {
        //cout<<ii<<endl;
    }
    cout << "计时完成 ...... \n";

    // 静态成员函数chrono::steady_clock::now()获取结束的时间点
    chrono::steady_clock::time_point end=chrono::steady_clock::now();
    //auto end = chrono::steady_clock::now();

    // 计算消耗的时间 单位是纳秒
    auto dt = end - start;
    cout << "耗时: " << dt.count() << "纳秒（"<<(double)dt.count()/(1000*1000*1000)<<"秒）";

    return 0;
}
