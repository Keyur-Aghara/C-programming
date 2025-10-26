#include<stdio.h>
int fact(int);
void main(){
    int n,i=1,ans;
    printf("enter a number: ");
    scanf("%d",&n);
    ans=fact(n);
    printf("%d",ans);
}
int fact(int n){
    int i,ans=1;
    for(i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}