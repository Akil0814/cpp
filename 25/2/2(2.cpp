//模板类与继承
//普通类继承模板类实例化版本

#include<iostream>
using namespace std;

template<class T1,class T2>
class BB//模板类//基类
{
public:
    T1 m_x;
    T2 m_y;
    BB(const T1 x,const T2 y):m_x(x),m_y(y)
    {
        cout<<"调用了BB构造函数\n";
    }
    void func2()const
    {
        cout<<"调用了func2函数:x="<<m_x<<" y="<<m_y<<endl;
    }
};


class AA:public BB<int,string>//普通类//派生类
{
public:
    int m_a;
    AA(int a ,int x,string y):BB(x,y),m_a(a)
    {
        cout<<"调用AA构造函数\n";
    }
    void func1()
    {
        cout<<"调用了func1函数:m_a="<<m_a<<endl;
    }
};


int main()
{
    AA aa(8,3,"aaa");
    aa.func1();
    aa.func2();

    return 0;
}