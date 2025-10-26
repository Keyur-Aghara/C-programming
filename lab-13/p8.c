#include<stdio.h>
void main(){
   int i,j,m=1;
   char ch='A';
   for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        if(i%2==1){
            printf("%d ",m++);
        }
        else{
            printf("%c ",ch++);
        }
    }
    m=1;
    printf("\n");
   }
}