#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a[3];
        for(int i=0;i<3;i++)
        {
            scanf("%d",&a[i]);
        }
        int v;
        for(int i=0;i<3;i++)
        {
            v=(a[2]-((a[0]*a[2])/(a[0]+a[1])));

        }
        printf("%d\n",v);
    }
    return 0;
}