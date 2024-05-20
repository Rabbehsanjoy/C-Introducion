#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char s[101];
   
    for(int i=0;i<n;i++)
    {
        fgets(s,101 ,stdin);
        getchar();
        int len=strlen(s);
        if(len<=10){
            printf("%c\n",s[i]);
        }
        else{
            printf("%c%d%c\n",s[0],len-2,s[n-1]);
        }
    }
    return 0;
}