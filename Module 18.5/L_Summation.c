#include<stdio.h>
long long int sum(long long int a[],int n,int i)
{
    if(i==n) return 0;
    long long int r=a[i]+sum(a,n,i+1);
    return r;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int r=sum(a,n,0);
    printf("%lld",r);
    return 0;
}