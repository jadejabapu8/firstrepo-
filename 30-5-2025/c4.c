#include<stdio.h>
#include<conio.h>
#include<string.h>


int main() 
{
    char str[] = "hello sir";
    int length = 0;
    int n = 0;//

    while (str[n] != '\0') 
    {
        length++;
        n++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}