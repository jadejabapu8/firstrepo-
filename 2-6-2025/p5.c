#include<stdio.h>
#include<conio.h>

int main ()
{
    
    int a[5] = {5,9,6,8,7};
    
    int i,j,n;
    
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            if (a[i]<a[j])
            {
                n = a[i];
                a[i] = a[j];
                a[j] = n;
            }
        }
    }
    
    for (i=0;i<5;i++)
    {
        printf ("%d",a[i]);
    }
    
    
}