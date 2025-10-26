#include<stdio.h>
void main(){
    int n,sum=0,avg,i=1,j;
    printf("enter a size: ");
    scanf("%d",&j);
    while(i<=j){
        printf("enter a number: ");
        scanf("%d",&n);
        sum=sum+n;
        i++;
    }
    printf("sum=%d\n",sum);
    avg=(float)sum/j;
    printf("avg=%d",avg);
}