/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//in size of we don't use space and it should be specified whicb size of to use
#include <stdio.h>

int main()
{
    int a=5;
    float b=5.0;
    double c=2.632424;
    long double d=4;

    printf("%d\n",sizeof (int));
    printf("%d\n",sizeof (float));
    printf("%zu\n",sizeof (double));
    printf("%ld",sizeof (long));
    
    return 0;
}
