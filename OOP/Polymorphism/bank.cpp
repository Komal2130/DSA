#include<iostream>
using namespace std;
class Bank
{
    public:
    void roi()
    {
        cout<<"General Rate";
    }
};
class Axis: public Bank
{
    public:
    void roi()
    {
        cout<<"10.99";
    }
};

int main(void)
{
    Axis a;
    a.roi();
    return 0;
    //overriding

    // Bank *a;
    // Axis k;
    // a=&k;
    // a->roi();

    // Axis *a;
    // Bank k;
    // a=(float)k;
    // a->roi();


}