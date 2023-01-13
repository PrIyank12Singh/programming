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
     float p,r,t,CI;
 printf("Enter the value of p:");
 scanf("%f",&p);
printf("Enter the value of r:");
 scanf("%f",&r);
 
    printf("Enter the value of t:");
 scanf("%f",&t);
 CI=p*(pow((1+r/100),t)-1);
 printf("Compound Intrest=%f",CI);

    return 0;
}
