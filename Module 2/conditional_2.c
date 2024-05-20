#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 100)
    {
        printf("Burger khabo");
    }
    else if(tk >= 50)
    {
        printf("Fuchka khabo");
    }
    else if(tk >= 35)
    {
        printf("coke khabo");
    }
    else
    {
        printf("Kichui khabo na");
    }
    return 0;
}