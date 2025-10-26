#include<stdio.h>
void main(){
    int i=1,num;
    printf("enter a number: \n");
    scanf("%d",&num);
    do{
        if(i%2!=0){
        printf("%d\n",i);
        }i++;
    }while(i<=num);
}