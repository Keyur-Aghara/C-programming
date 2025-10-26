#include<stdio.h>
void main(){
    int a,b,*p1,*p2,temp;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("%d %d",a,b);
}