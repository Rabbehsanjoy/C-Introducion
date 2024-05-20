#include<stdio.h>
void se(int a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d",i);
        printf(" ");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    se(a,n);
    return 0;
}