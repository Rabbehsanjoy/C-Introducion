#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=INT_MIN;
    int min=INT_MAX;
    int j,k;
   
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
            j=i;
        }
        else if(max<a[i]){
            max=a[i];
            k=i;
        }
        a[j]=max;
        a[k]=min;
        printf("%d ",a[i]);
    }
    
    return 0;
}