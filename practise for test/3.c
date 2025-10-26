#include<stdio.h>
void main(){
    int arr[100],n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter element of array: ");
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int smallest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        else if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("largest=%d smallest=%d",largest,smallest);
}