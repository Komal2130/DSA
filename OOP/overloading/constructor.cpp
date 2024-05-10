#include<iostream>
using namespace std;
class Test
{
    public:
    Test()                                //Non-Parametrized Constructor
    {
        cout<<"Hello"<<endl;
    }
    void show()
    {
        cout<<"Hello1";
    }
};

int main()
{
    Test t;
    t.show();
}