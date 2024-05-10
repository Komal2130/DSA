#include<iostream>
using namespace std;

//in modern software

// objects are termed as instances

// static are termed as class variables or static variables

class Student
{
    int x;
    static int count;
    public:
    void show()
    {
        cout<<x<<count;
    }
};
// int Student




// class abc
// {
//     int x;
//     static int count;
//     public:
//     static void show1()         ////static is special so it is used as :: with class name
//     {
//         cout<<count;
//     }
//     void show2()
//     {
//         cout<<x<<count;
//     }
// };
// int abc::count=10;

// void main()
// {
//     abc o1;
//     abc::show1();
//     o1.show2();
// }
