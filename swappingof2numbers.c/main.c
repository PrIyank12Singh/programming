/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//let there be a third variable 
int main()
{
  int a,b,temp;
  scanf("%d%d",&a,&b);
  temp=a;
  a=b;
  b=temp;
  printf("Value of a is %d\n",a);
  printf("Value of b is %d",b);
    return 0;
}
