#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001];
    fgets(a,sizeof(a),stdin);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            printf("%c",a[i]-('a'-'A'));
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            printf("%c",a[i]-('A'-'a'));
        }
        else if(a[i]==',')
        {
            printf("%c",a[i]==" ");
        }
        else{
            printf("%s",a[i]);
        }
    }

    return 0;
}
