#include<stdio.h>
void main(){
    int x,y,count=1;
    printf("enter a vale of x and y: ");
    scanf("%d %d",&x,&y);
    for(;y!=0;y--){
        count=count*x;
    }
    printf("%d",count);
}