#include<stdio.h>
void main(){
    int num,i=1;
    printf("enter a number: \n");
    scanf("%d",&num);
    while(i<=num){
        printf("%d\n",i++);
    }
}