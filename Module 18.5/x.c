#include<stdio.h>
int fun(int a[],int n,int i)
{
    if(i==n) return 0;
    int r = a[0]+fun(a,n,a[i+1]);
    
    return r;
    
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int r = fun(a,n,0);
    printf("%d",r);
    return 0;
}