#include<stdio.h>
#include<conio.h>
int main()
{
        
        for(int i=1;i<=10;i++)
        {
            if(i==6)
            {
                //break;
                continue;
            }
            printf("%d",i);
        }
    
    return 0;
}