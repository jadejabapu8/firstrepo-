#include<stdio.h>
#include<conio.h>

void main ()
{
    int pri,roi,year,intrest,ans;
    
    printf ("your pri amount :");
    scanf  ("%d",&pri);
    
    printf ("your rate of intrest :");
    scanf ("%d",&roi);
    
    printf ("enter year :");
    scanf ("%d",&year);
    
    intrest=pri*roi*year/100;
    ans = pri+intrest;
    
    
    printf ("total amount is : %d",ans);
}