#include<stdio.h>
void main(){
    int b[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter a value: ");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
}