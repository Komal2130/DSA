#include <stdio.h>

void main() {
    // signed char a = 1;
    // signed short int a = 1;
    signed long int a = 1;

    while(a)
    {
        printf("%d \t", a);
        a++;
    }
}