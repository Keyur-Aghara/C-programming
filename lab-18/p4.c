#include<stdio.h>
int com(int a,int b,int c);
void main(){
    int a,b,c,result;
    printf("Enter the three number: ");
    scanf("%d %d %d",&a,&b,&c);
    com(a,b,c);
    result=com(a,b,c);
    printf("%d",result);
}
int com(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}