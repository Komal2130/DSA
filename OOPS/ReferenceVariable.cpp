// data_type &ref_name=var.nme;

//e.g. float total = 100;                           int a =5;
// float &sum = total;                              int &b = a;

// Wrong:    int &b;
//Wrong      b=a;




// Default constructor
#include<iostream>
using namespace std;
class abc
{
    int num;
    public:
    abc()
    {
        num=0;
        cout<<"Default constructor";

    }
    abc(int n)
    {
        cout<<"Parametrized contructor";
        num =n;
    }
};
void main()

{
    abc o1;
    abc o2(50);
}