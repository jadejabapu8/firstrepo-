#include<stdio.h>
#include<conio.h>


void add(int n,int m)
{
   
    
    int j = n*m;
    printf("\n %d",j);
}

void main()
{
    int n;
    int m;
    
    printf("Enter n: ");
    scanf("%d",&n);
    
    printf("Enter m: ");
    scanf("%d",&m);
    
    add(n,m);
    
    
}

//with para without return type