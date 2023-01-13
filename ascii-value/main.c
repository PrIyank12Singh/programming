/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int v;
    

    scanf("%d",&v);
    if((v>=65&&v<=90)||(v>=97&&v<=122))
    {
       printf("v is alphabet");
    }
 else if(v>=48&&v<=57)
 {
     printf("v is digit");
 }
 else 
 {
     printf("v is special character");
 }
    return 0;
}
