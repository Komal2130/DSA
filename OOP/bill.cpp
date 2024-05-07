#include<iostream>
using namespace std;
class Test
{
    public:
    int bill;

    int unit;
    void insert(int unit)
    {
        this->unit= unit;
    }
    void logic()
    
    {
        if(unit<=100)
        {
           bill=200;
        }
        else if(unit>100 && unit <=200)
        {
            bill=200 + 2*abs(100-unit);
        }
        else if(unit>200 && unit <=300)
        {
            bill=200+ 200 +3*abs(200-unit);
        }
        else if(unit>300 && unit<=400 )
        {
            bill=200+ +200+300+ 5*abs(300-unit);
        }
        else 
        {
            bill=200+ 200+300+500+ 7*abs(400-unit);
        }
    }
    void output()
    {
        cout<<bill+200;
    }
};


int main()
{
    Test t;
    t.insert(430);
    t.logic();
    t.output();

}