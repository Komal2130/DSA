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
    void logic()
    {
        area=3.14*radius*radius;
    }


};
class base:public Test
{
    public:
    void output() 
    {
        cout<<"Area of Circle: "<< area;
    }
};
int main()
{
    base b;
    int r;
    cout<<"Enter the Radius: ";
    cin>> r;
    b.insert(r);
    b.logic();
    b.output();
}
