#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
}