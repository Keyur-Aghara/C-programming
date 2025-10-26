#include<stdio.h>
void main(){
    int a[]={1,2,3,4,6};
    int *ptr,i,j,sum=0;
    ptr=a;
    for(i=0;i<5;i++){
        sum=sum+*(ptr+i);
    }
    printf("%d",sum);
}