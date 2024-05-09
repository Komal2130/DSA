#include<iostream>
using namespace std;
class A
{
    
    public:
    void fact()
    {
        cout<<"Class A";
    }
};



class Komal : public  A
{
    
    public:
    void name()
    {
        cout<<"HI! My name is komal";
    }
};

int main()
{
//     Komal k;
//     k.name();
// return 0;
    //upcasting
    
    A *a;
    Komal k;
    a=&k;
    a->fact();
}    