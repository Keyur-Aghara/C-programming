#include<stdio.h>
void main(){
    int i=1,n;
    printf("enter a number: ");
    scanf("%d",&n);
    while(i<=n){
        printf("%d*%d=%d\n",i,n,i*n);
        i++;
    }
}