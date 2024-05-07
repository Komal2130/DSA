#include<iostream>
#include<string>
using namespace std;

class Employee
{
    public:
    int emp_id;
    string desg;
    static string ccn;
    Employee(int emp_id,string desg)
    {
        this->emp_id=emp_id;
        this->desg=desg;
        
    }
    void dis()
    {
        cout<<emp_id<< desg<< ccn;
    }
};
string Employee::ccn =" GOOGLE";

int main()
{
    Employee s1(101,"Ravi");
    s1.dis();
    Employee s2(102,"ADI");
    s2.dis();
}