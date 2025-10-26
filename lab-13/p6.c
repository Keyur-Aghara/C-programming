#include<stdio.h>
void main(){
   int i,j,m=0;
   for(i=0;i<=5;i++){
    for(j=0;j<i;j++){
        if(m==0){
            printf("1");
            m=1;
        }
        else{
            printf("0");
            m=0;
        }
    }
    printf("\n");
   }
}