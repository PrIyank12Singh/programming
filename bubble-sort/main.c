/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sort(int a[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    sort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}

int sort(int a[],int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1]){
            a[j] = a[j]^a[j+1];
            a[j+1] = a[j]^a[j+1];
            a[j] = a[j]^a[j+1];}
        }
    }
}