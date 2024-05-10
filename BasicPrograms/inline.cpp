// // Inline function  not works on these cases:

// // 1.use of loop
// // 2.use of static keyword
// // 3.in case of big complex logic


// // it works on small codes




// #include<iostream>
// using namespace std;

// class Student
// {
//     int roll;
//     string name;

// public:
//     void input()
//     {
//         cout<<"\nEnter roll no :";
//         cin>>roll;
//         cout<<"\nEnter name: ";
//         cin>>name;

//     }
//     inline void output()
//     {
//         cout<<"\nROLL :"<<roll;
//         cout<<"\nNAME :"<<name;
//     }

// };

// int main()
// {
//     Student s1;
//     Student s2;
//     Student *s3 = new Student;

//     cout<<"\n\nFill the dat of s1:";
//     s1.input();
//     cout<<"\n\nFill the data of s2";
//     s2.input();

//     cout<<"\n\nFill the data of s3:";
//     s3->input();

//     cout<<"\nAll data saved.";
//     s1.output();
//     s2.output();
//     s3->output();
// }


#include<iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:
void input();
void output();
    

};

int main()
{
    Student s1;
    Student s2;
    Student *s3 = new Student;

    cout<<"\n\nFill the dat of s1:";
    s1.input();
    cout<<"\n\nFill the data of s2";
    s2.input();

    cout<<"\n\nFill the data of s3:";
    s3->input();

    cout<<"\nAll data saved.";
    s1.output();
    s2.output();
    s3->output();
    return 0;
}
void  Student::input()
    {
        cout<<"\nEnter roll no :";
        cin>>roll;
        cout<<"\nEnter name: ";
        cin>>name;

    }
inline void Student::output()
    {
        cout<<"\nROLL :"<<roll;
        cout<<"\nNAME :"<<name;
    }








//it imports all libraries


// #include<bits/stdc++.h>

