#include<stdio.h>
void main(){
    int a[100]={1,2,3,4,5},n=5,*ptr;
    ptr=&a[100];

    for(int i=0;i<n;i++){
        printf("%d ",*(*ptr));
    }
}