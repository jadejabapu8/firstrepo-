#include<stdio.h>
#include<conio.h>
int main()
{   
    int num,sum=0,rem=0;
    
    printf("Enter Number: ");
    scanf("%d",&num);
    
    while(num>0)
    {
       rem = num%10;
       sum+=rem;
       num=num/10;
    }
    
    printf("Sum of all digits are: %d",sum);
    
  
    
    return 0;
}