#include<iostream>
using namespace std;
class Test                            
{
    public:
    int roll;                         //Global Variable scope whole program
    void insert(int r)                //r ia a local variable that is being used only under the parenthesis
    {                                 //for return value replace void with int
        roll=r;                       //local variable
    }
    void display()                    
    {
        cout<<roll;                   
    }
};
int main()
{
    Test t;
    t.insert(20);
    t.display();
    return 0;
}



//In OOPS everything can be divided in parts or methods or functions 
//