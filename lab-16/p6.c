#include<stdio.h>
void main(){
    int a[100][100],i,j,n,sum=0;
    printf("enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("enter number: ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("diagonal element is\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                printf("%d ",a[i][j]);
                sum=sum+a[i][j];
            }
        }
    }
    printf("\nsum of dioganal element is %d",sum);
}