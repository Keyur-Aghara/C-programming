#include<stdio.h>
int digit(int n);
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int d=digit(n);
    printf("%d",d);
}
int digit(int n){
    if(n==0){
        return 0;
    }
    else{
        return n%10+digit(n/10);
    }
}