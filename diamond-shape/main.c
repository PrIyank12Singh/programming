
#include <stdio.h>

int main()
{   int k =4,m=1;
    for(int i =1;i<=5;i++)
    {
        for(int j =1;j<=k;j++)
        {
            printf(" ");
        }
        k--;
        for(int l = 1;l<=m;l++)
        {
            printf("*");
        }
        m+=2;
        printf("\n");
    }
    int p=0,q = 9;
    for(int i =1;i<=5;i++)
    {
        for(int j =1;j<=p;j++)
        {
            printf(" ");
        }
        p++;
        for(int l = 1;l<=q;l++)
        {
            printf("*");
        }
        q-=2;
        printf("\n");
    }

    return 0;
}
