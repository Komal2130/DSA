#include<iostream>
using namespace std;
int fibb(int n)
{
    //Initial Fibonaci of 0 is 0, Fibonacci of 1 is 1
    if (n == 0)
    return 0;
    else if (n == 1)
    return 1;

    //Recursive case:
    //Fibonacci of n is the sum of the previous two fibonnacci numbers
    return fibb(n - 1)+ fibb(n - 2);
}
    
//     int a = 0;
//     int b = 1;
    
//     for(int i = 2; i< n;i++)
//     {
//         int c = a + b;
//         a=b;
//         b=c;
//         return fibb(n);
//     }
    

// }

int main()
{
    int n;
    cout<< "Input a number:";
    cin>>n;
    int fib_num = fibb(n);
    cout<<"The"<<n<<"th fibonacci number is: "<<fib_num<<endl;
    return 0;

}


