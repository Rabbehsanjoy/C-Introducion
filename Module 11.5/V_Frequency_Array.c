#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&m);
    int a[n];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt[m-1]={0};
    for(int i=0;i<m;i++)
    {
        cnt[a[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        printf("%d\n",cnt[m-1]);
    }
    return 0;
}