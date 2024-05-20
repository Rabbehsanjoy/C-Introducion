#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d%d",&a, &b);
    int sum=a+b;
    printf("%d+%d = %d\n",a,b,sum);
    int sub=a-b;
    printf("%d - %d = %d\n",a,b,sub);
    int mlt=a*b;
    printf("%d * %d = %d\n",a,b,mlt);
    float dvd=(float)a/b;
    printf("%d/%d=%.2f",a,b,dvd);
    return 0;
}