#include<stdio.h>
#include<conio.h>
void main()
{
    
        int num,lastdigit=0,max=0;
        
        printf("Enter Any number");
        scanf("%d",&num);//1826
        
        while(num>0)
        {
            lastdigit = num%10;//6
            
            if(lastdigit>max)
            {
                max = lastdigit;
            }
            
            num=num/10;
        }
        
        printf("Max Num is %d",max);
        
        
    
    getch();
}