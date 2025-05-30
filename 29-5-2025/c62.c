#include <stdio.h>
#include <conio.h>
	void main()
	{	
		int m=8, n;	
	
		printf("\n\n Value of m : %d",m);	
		m++; 	
		printf("\n\n Value of n : %d",m); 
		
		++m; 
		printf("\n\n Value of m : %d",m); 
		
		n=--m;	
		printf("\n\n Value of m : %d",m); 
		printf("\n\n Value of n : %d",n); 
		
		n=m++;	
		printf("\n\n Value of m : %d",m);
		printf("\n\n Value of n : %d",n); 
		
		n++;	
		printf("\n\n Value of n : %d",n);
		
		getch();
	}