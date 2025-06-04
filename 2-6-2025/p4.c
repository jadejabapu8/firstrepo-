#include<stdio.h>
#include<conio.h>

int main ()
{
    int a[2][2],b[2][2],i,j,k,result[2][2];
    
    printf ("enter first :");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf ("%d",&a[i][j]);
        }
    }
    
    
    
     printf ("enter sec :");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf ("%d",&b[i][j]);
        }
    }
    
    
    
     
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
           result[i][j] = 0;
           
           for (k=0;k<2;k++)
           {
               result[i][j] += a[i][k]*b[k][j];
           }
        }
    }
    
    
     
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf ("%d ",result[i][j]);
        }
        
        printf ("\n");
    }
    
    
}