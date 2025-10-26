#include<stdio.h>
void swap(int *a,int *b);
void main(){
    int a=5,b=10;
    printf("before %d %d\n",a,b);
    swap(&a,&b);
    printf("after %d %d",a,b);
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}