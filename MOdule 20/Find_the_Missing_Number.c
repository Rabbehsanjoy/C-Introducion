#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        long long int m,a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        if(m%(a*b*c)==0)
        {
            long long int ans=m/(a*b*c);
            printf("%lld\n",ans);
        }
        else if(m%(a*b*c)>0)
        {
            printf("-1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}