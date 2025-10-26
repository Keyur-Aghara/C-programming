#include<stdio.h>
void main(){
    int a[100][100],i,j,n,b[100][100];
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
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("after inverse the matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}