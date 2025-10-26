#include<stdio.h>
#include<string.h>
// strlen
void main(){
    char str[100];
    printf("enter a string: ");
    gets(str);//darshan
    //str[0]=d,str[1]=a,str[2]=d,str[3]=a....str[7]=\0
    int len=0,i;
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    printf("length of string:%d",len);
}