#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[10001];
    
    for(int i=0;i<n;i++)
    {
        
        scanf("%s",s);
        int cnt=0,cnt1=0,cnt2=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                cnt++;
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                cnt1++;
            }
            else{
                cnt2++;
            }
        }
        printf("%d %d %d\n",cnt,cnt1,cnt2);
    }


    return 0;
}