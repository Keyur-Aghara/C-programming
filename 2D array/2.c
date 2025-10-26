#include<stdio.h>
void main(){
    int row,col,i,j;
    printf("enter a number of row: ");
    scanf("%d",&row);
    printf("enter a number of coloumn: ");
    scanf("%d",&col);
    int arr[row][col],tarr[col][row];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter a value: ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            tarr[j][i]=arr[i][j];
            printf("%d",tarr[i][j]);
         }
         printf("\n");
    }
}