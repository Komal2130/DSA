#include<iostream>
using namespace std;
class Test
{
    public:
    virtual void show()=0;
    virtual void dis()=0;
};
class base:public Test
{
    public:
    void show()
    {
        cout<<"show";
    }
    void dis()
    {
        cout<<"display";
    }
};
int main()
{
    base b;
    b.show();
    b.dis();
}