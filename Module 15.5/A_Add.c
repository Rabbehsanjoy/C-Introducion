#include<stdio.h>
void add(int *x,int *y)
{
    int add=*x+*y;
    printf("%d",add);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    add(&x,&y);
    return 0;
}