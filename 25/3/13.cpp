// 线程
//如果主程序结束 所有子线程都会停止
#include <iostream>
#include <thread>
#include <windows.h>
using namespace std;

void func(int num, const string &str)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "第" << i << " 次,num=" << num << " neam=" << str << endl;
        Sleep(1000); // 休眠1秒。
    }
}


int main()
{
    // 用普通函数创建线程
    thread t1(func, 1, "akill");
    thread t2(func,2,"maiii");


    cout << "任务开始\n";
    for (int i = 0; i < 5; i++) // 主线程//其余都是子线程
    {
        cout << "任务中\n";
        Sleep(500); // 模拟任务所需时间
    }
    cout << "任务完成" << endl;


    t1.join(); // 回收线程资源
    t2.join();


    return 0;
}
