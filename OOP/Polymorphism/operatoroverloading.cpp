#include<iostream>
using namespace std;
class Test
{
    private:
    int num;
    public:
    Test():num(8){}                      //  Test(){num=8;}   
    
    void operator ++()
    {
    num = num + 2;
    }
    void Print()
    {
        cout<<"The count is: "<<num;
    }

};

int main()
{
    Test tt;
    ++tt;              //Calling of a function "void operator ++()"
    tt.Print();
    return 0;
}