#include<iostream>
using namespace std;
//Copy constructor
//we can copy value of one object to another object

//B1 and B2 we have two object under B1 we have 2 variable like a=90 and b=78;
//so B2=B1 using this B1 object value copy to B2.

class A
{
    public:
    int x;
    A(int a)      //a=20          //parrametrized constructor
    {
        x=a;       //x=20
    }
    A(A &i)               //copy constructor    i=101 (101.x for old)
    {
        x=i.x;
    }
};
int main()
{
    A a1(20);       ///Calling the parametrized constructor  .a1 address 101
    A a2(a1);         //Calling the copy constructor . A a2(101)
    cout<<a2.x;         //102.x
    return 0;
}