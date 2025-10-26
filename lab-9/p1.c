#include<stdio.h>
void main(){
    int n,i=1,sum1=0,sum2=0,sum;
    printf("enter a number: ");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            sum1=sum1-i;
        }
        else{
            sum2=sum2+i;
        }
    sum=sum1+sum2;
    i++;
    }
    printf("%d",sum);
}