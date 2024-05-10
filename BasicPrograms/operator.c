// Check if the no. is even without using any arithmetic or relational operatiors.


// First Method
#include<stdio.h>

void main() {
    int a = 4;
    if(a & 1) {
        printf("%d is an odd no.",a);

    }
    
    else    {
        printf("%d is an even no.",a);
    }
}

// Second Method

// (a & 1) ? printf("Odd")