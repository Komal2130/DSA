#include<iostream>
using namespace std;

class Test
{
    public:
    int a,b;
    void insert(int a,int b)
    {
        this->a=a;                     //a=a; this prints global variable
        this->b=b;                     //b=b; this prints globaL VARIABLE
    }
    void dis()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};


int main()
{
    Test t;
    t.insert(4,6);
    t.dis();
}