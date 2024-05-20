#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=(n-1)/2+5;
    k=1;
    for(int i=1;i<=6+(n/2);i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        s--;
        k+=2;
        printf("\n");
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}