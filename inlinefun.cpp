#include<iostream>
using namespace std;

class message
{
    

public:
void input();
void output();
    

};

int main()
{
    
    message *m1 = new message;

    cout<<"Welcome to Jaipur";
    m1->input();
    
    m1->output();
    return 0;
}
void  message::input()
    {
        cout<<"\nHi";
       
    }
inline void message::output()
    {
        cout<<"\nBye!";
        // cout<<"\nNAME :"<<name;
    }
