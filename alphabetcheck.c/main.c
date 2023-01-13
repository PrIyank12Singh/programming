/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     char c; ; 
  printf("Enter the value of c:");
   scanf("%c",&c);
   if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
   printf("%c is alphabet.",c);
   else 
   printf("%c is not a alphabet.",c);

    return 0;
}
