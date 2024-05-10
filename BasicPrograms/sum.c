// Program to find the sum of two numbers without using + operator

#include<stdio.h>

void main() {
    int x = 6;
    int y = 2;
    int z= x -(-y);
    
    printf("Sum =%d",z);
}       

// methods
// -(-x-y)
//abs(-x-y)
//x-(~y)-1
