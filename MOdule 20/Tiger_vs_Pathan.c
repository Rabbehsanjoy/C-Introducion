#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int k=0;k<test;k++)
    {
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        int t=0,p=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='T')
            {
                t++;
            }
            else
            {
                p++;
            }
        }
        if(t>p)
        {
            printf("Tiger\n");
        }
        else if(t<p)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }        
    return 0;
}