//this program is pending
#include<stdio.h>
void main(){
    int a[100][100],i,j,n,b[100][100],sum=0,c[100][100];
    
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
            printf("enter number: ");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(int k=0;k<n;k++){
                sum=sum+a[i][k]*b[k][j];
            }
        }
    }
    c[i][j]=sum;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
    }
}