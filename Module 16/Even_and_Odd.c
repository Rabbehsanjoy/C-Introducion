#include<stdio.h>
void odd_even(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    printf("%d %d",cnt1,cnt2);
}
int main()
{
    
    odd_even();

    return 0;
}