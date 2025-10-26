#include<stdio.h>
void main(){
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
}