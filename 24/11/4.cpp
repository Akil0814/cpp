#include <iostream>
using namespace std;

class player
{
public:
    string name; // 用类定义一个变量叫实例化一个对象
    int age;
    player()
    {
        cout << "player()" << endl;
    }
    ~player()
    {
        cout << "~player()" << endl;
    }

    void show()
    {
        cout << "naem; " << name << ", age; " << age << endl;
    }
    void set(string naem1, int age1)
    {
        name = naem1;
        age = age1;
    }
    void show2();
};

void player::show2() // show2 是player 的成员变量函数
{
    cout << "akil" << endl;
}

int main()
{
    player akil; // 创建成员变量
    akil.set("akil", 20);
    akil.show();
    akil.show2();
    player x=akil;
    x.set("akil", 20);
    x.show();
    x.show2();


    return 0;
}
