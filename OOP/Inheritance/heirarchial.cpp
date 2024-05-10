#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    int b;
    int sum;
    float average;
    void insert(int a,int b )
    {
        this->a= a;
        this->b= b;
    }
};
class B :public A{
    public:
    void logic()
    {
        sum=a+b;
        cout<<sum<<endl;
    }

};
class C:public B{
    public:
     void avg()
    {
        average=(a+b)/2;
        cout<<average<<endl;
    }

};

int main()
{
    C c;
    c.insert(6,8);
    c.logic();
    c.avg();
}