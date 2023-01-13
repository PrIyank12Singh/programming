/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
 int a,b,c,max;
 printf("Enter the value of a:");
 scanf("%d",&a);
 printf("Enter the value of b:");
 scanf("%d",&b);
 printf("Enter the value of c:");
 scanf("%d",&c);
 max=a>b?(a>c?a:c):(b>c?b:c);
 
      printf("Max among all three=%d",max); 
            
         
         
     
     
    return 0;
    
    
}
