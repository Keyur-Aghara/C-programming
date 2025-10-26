#include<stdio.h>
void main(){
    int a[100][100],neg=0,pos=0,zero=0,i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter element: ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]<0){
                neg++;
            }
            else if(a[i][j]>0){
                pos++;
            }
            else{
                zero++;
            }
        }
    }
    printf("negative=%d,positive=%d,zero=%d",neg,pos,zero);
}