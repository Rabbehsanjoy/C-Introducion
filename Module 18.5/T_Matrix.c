#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    int sum1=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
         if(i==j)
         {
            sum=sum+a[i][j];
         }
         if(i+j==n-1)
         {
            sum1=sum1+a[i][j];
         }
        }    
    }
    int r=abs(sum-sum1);
    printf("%d",r);
    return 0;
}