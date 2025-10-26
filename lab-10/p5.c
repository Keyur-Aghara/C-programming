#include<stdio.h>
void main(){
    int n,digit,r=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        r= r*10+digit;
        n=n/10;
    }
    printf("%d",r);
}