#include<iostream>
using namespace std;
class Test
{
    public:
    Test()
    {
        cout<<"Hello";
    }
    Test(int x)
    {
        cout<<x;
    }
    Test(char x)
    {
        cout<<x;
    }
};

int main()
{
    Test t;
    Test t1(2);
    Test t2('A');
    
}