#include<stdio.h>
void com(int a,int b);
void main(){
    int a,b,result;
    printf("Enter the two number: ");
    scanf("%d %d",&a,&b);
    com(a,b);
}
void com(int a,int b){
    if(a>b){
        printf("%d is greater than %d",a,b);
    }
    else{
        printf("%d is greater than %d",b,a);
    }
}