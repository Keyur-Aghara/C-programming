#include<stdio.h>
void main(){
    int num1,num2,ans;
    printf("enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    if(num1%2==0){
        printf("%d",num1/2);
    }
    else{
        printf("%d",num2/2);
    }
}