#include<stdio.h>
void main(){
    int size,i;
    printf("enter a size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        printf("enter a value for a[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        printf("a[%d]=%d",i,arr[i]);
    }
}