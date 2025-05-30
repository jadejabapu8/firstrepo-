#include<stdio.h>
#include<conio.h>

int main ()
{
    char n;
    
    printf("enter Character :");
    scanf("%c",&n);
    
    if (n=='A' || n=='B' || n=='C' || n=='D' || n=='E')
    {
        printf("It's a Vowel");
    }
    
    else
    {
         printf("It's a Consonant");  
    }
}

