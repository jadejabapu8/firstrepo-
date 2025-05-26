#include<stdio.h>
#include<conio.h>
int main()
{
    
int i,j,n;
   
   for(i=1;i<=5;i++)
   {
       for(n=1; n<=5-i ;n++)
   {
       printf(" ");
   }
   for(j=1; j<=i ;j++)
   {
       printf("%d",i);
   }
   printf("\n");
   }

}
