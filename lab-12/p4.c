#include<stdio.h>
void main(){
int i,j,m;
m=0;
 for(i=0;i<=5;i++){
    for(j=0;j<i;j++){
        printf("%d",m);
    }
    m++;
    printf("\n");
   }
}