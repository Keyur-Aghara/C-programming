#include<stdio.h>
void main(){
    int size,i,max;
    printf("enter a size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        printf("enter a value for a[%d]",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("max=%d",max);
}