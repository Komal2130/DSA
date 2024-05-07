#include<iostream>
using namespace std;
class Avg
{
    public:
    int a1;
    int b1;
    int c1;
    float avg;
    void insert(int a,int b, int c)
    {
        a1=a;
        b1=b;
        c1=c;
        
    }
    void logic()
    {
        avg = (a1+b1+c1)/3;
    }
    void display()
    {
        cout<<avg;
    }
};
int main()
{
    Avg d;
    d.insert(1,2,3);
    d.display();
    return 0;
    // cout<<avg;

}