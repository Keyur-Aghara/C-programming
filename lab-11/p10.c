#include<stdio.h>
void main(){
    int mul=0,pow=1,n1,n2,i;
    printf("enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    for(i=0;i<n2;i++){
        mul=mul+n1;
    }
    for(i=0;i<n2;i++){
        pow=pow*n1;
    }
    printf("multiplication is %d and power is %d",mul,pow);
}