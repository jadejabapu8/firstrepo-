#include<stdio.h>
#include<conio.h>
int main()
{
    
int i,j,num;

printf("enter number");
scanf("%d",&num);
   
   for(i=1;i<=num;i++)
   {
       
   for(j=1; j<=i; j++)
   {
       printf("%d ",i*i);
       
   }
   printf("\n");
   }

}
