#include <stdio.h>
#include <conio.h>

void main() {

   int a = 18;
   int b = 26;
  
   if ( a && b ) 
   {
      printf("Line 1 - Condition is true\n" );
   }
	
   if ( a || b ) 
   {
      printf("Line 2 - Condition is true\n" );
   }
   
   /* lets change the value of  a and b */
   a = 0;
   b = 10;
	
   if ( a && b ) 
   {
      printf("Line 3 - Condition is true\n" );
   } 
   else
   {
      printf("Line 3 - Condition is not true\n" );
   }
	
   if ( !(a && b) ) 
   {
      printf("Line 4 - Condition is true\n" );
   }
   getch();
	
}