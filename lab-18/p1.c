#include<stdio.h>
int add(int a,int b);
void main(){
    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    add(a,b);
    sum=add(a,b);
    printf("Sum of two numbers is: %d",sum);
}
int add(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}