#include<stdio.h>
void main(){
    int a[6],i,pc=0,nc=0;
    for(i=0;i<6;i++){
   printf("enter number: ");
    scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++){
        if(a[i]>=0){
            pc++;
        }
        else{
            nc++;
        }
    }
    printf("%d %d",pc,nc);
}