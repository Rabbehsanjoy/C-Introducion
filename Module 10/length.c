#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    scanf("%s",a);
    int count=0;
    int i=0;
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d\n",count);
    return 0;
}