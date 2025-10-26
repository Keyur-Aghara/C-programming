#include<stdio.h>
void main(){
    int a[100][100],b[100][100],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter roll no.: ");
            scanf("%d",&a[i][j]);
            printf("enter marks: ");
            scanf("%d",&b[i][j]);
    }}
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}