#include<stdio.h>
void main(){
    int fd,ld,n,temp;
    printf("enter a number: ");
    scanf("%d",&n);
    ld=n%10;
    for(fd=n;fd>=10;){
        fd=fd/10;
    }
    printf("first digit is %d and last digit is %d\n",fd,ld);
    temp=fd;
    fd=ld;
    ld=temp;
     printf("after swapping first digit is %d and last digit is %d",fd,ld);
}