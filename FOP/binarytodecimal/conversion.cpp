#include<iostream>
#include<bitset>
using namespace std;

int main(){
    int a=32;
    int b= a>>3;
    int c= 258;

    cout<<"a="<< bitset<8>(a)<<endl;
    cout<<"b="<< bitset<8>(b)<<endl;
    cout<<"c="<< bitset<16>(c)<<endl;

    int x = 172;
    int y = x & (x-1);
    cout<<"a = "<<bitset<16>(x)<<endl;
    cout<<"b = "<<bitset<16>(x-1)<<endl;
    cout<<"c = "<<bitset<16>(y)<<endl;
}

