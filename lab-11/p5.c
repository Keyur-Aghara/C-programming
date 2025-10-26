#include<stdio.h>
void main(){
    int n,i;
    int ans=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        ans=ans*i;
    }
    printf("%d",ans);
}