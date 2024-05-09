#include<iostream>
using namespace std;
class Fruit
{
    public:
    void color()                      //METHOD OR FUNCTION
    {
        cout<<"This is a Fruit"<<endl;
    }
};

class apple:public Fruit
{
    public:
    void color()
    {
        cout<<"This is red in color"<<endl;
    }
};
class mango:public Fruit
{
    public:
    void color()
    {
        cout<<"This is yellow in color"<<endl;
    }
};
class orange:public Fruit
{
    public:
    void color()
    {
        cout<<"This is orange in color"<<endl;
    }
};

int main()
{
    apple a;
    a.color();
    orange o;
    o.color();
    mango m;
    m.color();
    Fruit f;
    f.color();

    Fruit *b;
    apple k;
    b=&k;
    b->color();
}