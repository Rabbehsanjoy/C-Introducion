#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i=0;
    while(i<t)
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
        i++;
    }
    
    return 0;
}