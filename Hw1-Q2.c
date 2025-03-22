
#include <stdio.h>

/* function main begins program execution */
int main()
{
   int integer1, integer2,sum;
   sum=0;
   
   
   printf( "Enter first integer\n" ); /* prompt */
   scanf( "%d", &integer1 );        /* read an integer */

   printf( "Enter second integer\n" ); /* prompt */
   scanf( "%d", &integer2 );           /* read an integer */
   
   sum = integer1 + integer2; /* assign total to sum */

   printf( "Sum is %d\n", sum ); /* print sum */
   
   return 0; /* indicate that program ended successfully */

} /* end function main */
