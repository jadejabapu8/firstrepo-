#include<stdio.h>
#include<conio.h>

void main ()
{
    int salary[100];
    
    int i,num;
    
    printf ("enter total emp :");
    scanf ("%d",&num);
    
    for (i=0;i<num;i++)
    {
        for (i=0;i<num;i++)
        {
            printf ("enter emp salary :");
            scanf ("%d",&salary[i]);
        }
    }
}