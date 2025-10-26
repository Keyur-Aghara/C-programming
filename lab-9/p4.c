#include<stdio.h>
void main(){
    int n,i;
    int ans=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        ans=ans*i;
    }
    printf("%d",ans);
}