#include<stdio.h>
int fun(char a[],int i)
{
    if(a[i]=='\0') return 0;
    int l=fun(a,i+1);
    return l+1;
}
int main()
{
    char a[6]="hell0";
    // scanf("%c",&a[1001]);
    int length=fun(a,0);
    printf("%d",length);
    
    return 0;
}