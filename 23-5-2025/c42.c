#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 5, b = 7;

    a = a + b; 
    b = a - b; 
    a = a - b; 

    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    
    return 0;
}