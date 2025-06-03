#include<stdio.h>
#include<conio.h>

void main ()
{
   int a,b;
   int add,sub,mul,div1,mod;
   
   printf ("enter value of a :");
   scanf  ("%d",&a);
   
   printf ("enter value of b :");
   scanf  ("%d",&b);
   
   add = a+b;
   sub = a-b;
   mul = a*b;
   div1 =a/b;
   mod = a%b;
   
   
   printf ("\n add is : %d ",add);
   printf ("\n sub is : %d ",sub);
   printf ("\n mul is : %d ",mul);
   printf ("\n div1 is : %d",div1);
   printf ("\n mod is : %d ",mod);
   
}