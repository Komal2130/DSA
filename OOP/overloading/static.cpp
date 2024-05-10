#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    int roll;
    string name;
    static const int cm=7500;
    Student(int roll,string name)
    {
        this->roll=roll;
        this->name=name;
    }
    void dis()
    {
        cout<<roll<<name<<cm;
    }
};

int main()
{
    Student s1(101,"Ravi");
    s1.dis();
}