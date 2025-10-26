#include<stdio.h>
void main(){
    int i,j,arr[100][100],n,sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("enter element of array: ");
            scanf("%d",&arr[i][j]);
            sum=sum+arr[i][j];
        }
    }
    printf("sum of all elements is %d",sum);
}