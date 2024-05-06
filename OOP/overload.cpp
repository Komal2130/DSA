#include<iostream>
using namespace std;
class Test
{
    public:
    int a;
    Test(int x)
    {
        a=x;
    }
    Test()
    {
        cout<<a;
    }
   
    
};

int main()
{
   
    Test t1(2);                             
    
    Test t2();
    
    
}