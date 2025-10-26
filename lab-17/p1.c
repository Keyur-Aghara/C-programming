#include<stdio.h>
void main(){
    int n=10,*ptr;
    ptr=&n;
    printf("%d %d",n,ptr);
}