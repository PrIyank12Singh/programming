/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,factor;
   printf("Enter the n:");
   scanf("%d\n",&n);
   printf("Enter the numbers for checking factor:\n");
   for(int i=1;i<n;i++)
   {
       if(n%i==0)
       printf("%d is factor of n\n",i);
       else
       printf("%d is not a factor\n",i);
   }

    return 0;
}
