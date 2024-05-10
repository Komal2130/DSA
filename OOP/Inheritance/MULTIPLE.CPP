#include<iostream>
using namespace std;
class Test
{
    public:
    int radius;
    float area;
    void insert(int radius)
    {
        this->radius= radius;
    }
};

class base:public Test{
    public:
    void logic()
    {
        area=3.14*radius*radius;
    }
 };

 class out:public base{
    public:
    void output()
    {
        cout<<area;
    }
 };

int main()
{
    out b;
    b.insert(5);
    b.logic();
    b.output();
}