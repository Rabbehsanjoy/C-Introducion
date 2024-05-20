#include<stdio.h>
void world()
{
    printf("World Start\n");
    printf("World\n");
}
void hello()
{
    printf("Hello start\n");
    world();
    printf("Hello\n");
    
}
int main()
{
    printf("Main start\n");
    hello();
    printf("End\n");
    return 0;
}