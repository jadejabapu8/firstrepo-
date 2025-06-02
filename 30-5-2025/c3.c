#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() 
{
    char s[100];
    int n;
    
    printf("Enter Your String : ");
    scanf("%s",&s);
    

    for (n = 0; s[n] != '\0'; ++n);
    
    printf("Length of the string: %d", n);
    return 0;
}