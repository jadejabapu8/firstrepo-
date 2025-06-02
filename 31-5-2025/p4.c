#include<stdio.h>
#include<conio.h>

void main ()
{
   int marks [100],i,num;
   
   printf ("enter your number :");
   scanf ("%d",&num);
   
   
   
   for (i=1;i<num;i++)
   {
       printf ("enter your marks :");
       scanf ("%d",&marks [i]);
   }
   
   
   printf ("\n marks are :");
   
   
   for (i=0;i<num;i++)
   {
       printf ("\n marks are : %d",marks [i]);
   }
   
    
}