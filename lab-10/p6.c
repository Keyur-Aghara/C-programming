#include<stdio.h>
void main(){
    int n,count=0,fact;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            count=count+i;
        }
    }
    if(count==n){
        printf("number is perfect");
    }
    else{
        printf("number is not perfect");
    }
}