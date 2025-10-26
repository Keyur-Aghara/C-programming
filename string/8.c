#include<stdio.h>
#include<string.h>
void main(){
    char str[100],ch;
    int i,j;
    printf("enter a string ");
    gets(str);
    int len=strlen(str);
    for(i=0;i<len/2;i++){
        ch=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=ch;
    }
    printf("%s",str);
}