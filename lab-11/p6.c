#include<stdio.h>
void main(){
    int n,i,j,t1=0,t2=1,nt;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n>0){
        printf("%d %d ",t1,t2);
    }
    for(i=1;i<=n-2;i++){
        nt=t1+t2;
        printf("%d ",nt);
        t1=t2;
        t2=nt;
    }
}