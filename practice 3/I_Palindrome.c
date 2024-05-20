#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    fgets(s,sizeof(s),stdin);
    int l=0;
    int lens=strlen(s);
    for(int i=0;s[i]!='\0';i++){
        if(s[l]!=s[h]){
            l++;
            h--;
        }
    }
    return 0;
}