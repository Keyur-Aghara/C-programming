#include<stdio.h>
void main(){
    int n,i,sum=0,count=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count!=0){
        printf("number is not prime");
    }
    else{
        printf("number is prime");
    }
}