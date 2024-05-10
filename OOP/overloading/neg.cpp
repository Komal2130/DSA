#include<iostream>
using namespace std;
struct Negative
{
    int a;
    if(a<0)
    {
        cout<<-a;
    }
    else{
        cout<<a;
    }

};
int main(void)
{
    struct Negative neg;
    neg.a=9;
    cout<<"Number:"<<neg.a<<endl;
    return 0;
}
