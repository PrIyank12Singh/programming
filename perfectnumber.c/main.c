/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
   int n;
   scanf("%d",&n);
   int d=n;
   
   int sum=0;
  
       
       for (int i=1;i<=n/2;i++){
           if (n%i==0)
           sum=sum+i;
           else 
           continue;
       }
    
    if (sum==d)
    printf("yes");
    else
    printf("no");
   }
   

    
