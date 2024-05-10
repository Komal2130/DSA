#include<iostream>
using namespace std;
int sumOfDigits(int number)
{
    //If the number is a single digit, return the number itself
    if(number >=0 && number <=9)
    return number;

    //Recursive case:
    //Calculate the sum of the last digit and the sum of 
    return (number % 10) + sumOfDigits(number/10);
    //1--->  4           +              123
    //2--->  3           +              12
    //3--->  2           +              1
    //4--->  1           
}
int main()
{
    int n;
    cout<<"Input a number:";
    cin>>n;
    int sum_digits = sumOfDigits(n);
    cout<<"sumOfDigits"<<n<<"is:"<<sum_digits<<endl;
    return 0;
}
