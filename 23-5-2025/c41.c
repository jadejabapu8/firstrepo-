#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 5, b = 7, temp;

    
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);


    return 0;
    
}