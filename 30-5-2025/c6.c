#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() 
{
    char n1[100],m1[100];
    
    printf("Enter First String: ");
    scanf("%s",&n1);
    
    printf("Enter Second String: ");
    scanf("%s",&m1);
    
    printf("%d",strcmp(n1,m1));

    return 0;
}