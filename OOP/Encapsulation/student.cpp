#include<iostream>
using namespace std;
class Student
{
    private:
    //Private attribute
    int roll;
    string name;
    char grade;
    public:
    //Setter
    void setRoll(int r)
    {
        roll = r;
    }
    //Getter
    int getRoll()
    {
        return roll;
    }
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void setGrade(char g)
    {
        grade = g;
    }
    char getGrade()
    {
        return grade;
    }
};

int main()
{
    Student e;
    e.setRoll(101);
    cout<<e.getRoll()<<endl;
    e.setName("Komal");
    cout<<e.getName()<<endl;
    e.setGrade('A');
    cout<<e.getGrade()<<endl;
    return 0;
}