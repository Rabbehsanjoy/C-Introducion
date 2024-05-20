#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int flag=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {   
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==x)
                {
                    flag++;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}