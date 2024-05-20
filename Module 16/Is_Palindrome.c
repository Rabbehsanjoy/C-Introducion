#include<stdio.h>
#include<string.h>
int is_palindrome(char s[1001])
{
    int count=1;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!=s[strlen(s)-1-i])
        {
            count=0;
            break;
        }
        
    }
    return count;
}
int main()
{
    char s[1001];
    scanf("%s",s);
    int a= is_palindrome(s);
    if(a>0)
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
    return 0;
}