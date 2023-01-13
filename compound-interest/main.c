/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
 void main()
{
    float principle,rate, time, ci;
    printf("enter principle:");
    scanf("%f", &principle);
    printf("enter rate:");
    scanf("%f", &rate);
    printf("enter time:");
    scanf("%f", &time);
    ci=principle*(pow((1+rate/100),time));
    printf(" compound interest=%f", ci);

    return 0;
}
