#include<stdio.h>
int isprime(int n);
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int res=isprime(n);
    printf("%d",res);
}
int isprime(int n){
    int i,count=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("prime");
    }
    else{
        printf("not prime");
    }
}