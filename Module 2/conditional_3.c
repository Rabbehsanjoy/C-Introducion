#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 5000)
    {
        printf("coxs bazar jabo\n");
        if(tk >= 10000)
        {
            printf("saint martin jabo\n");
        }
        else
        {
            printf("ferot chole jabo\n");
        }
    }
    else
    {
        printf("kothao jabo na\n");
    }
    return 0;
}