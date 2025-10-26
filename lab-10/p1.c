#include<stdio.h>
void main(){
    int num,ld,fd,d;
    printf("enter a number: ");
    scanf("%d",&num);
    ld=num%10;
    d=printf("%d",num);
    while(d!=0){
        fd=num%10;
        num=num/10;
        d--;
    }
    printf("the sum of first digit and last digit is %d",fd+ld);
}