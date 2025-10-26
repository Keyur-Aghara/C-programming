#include<stdio.h>
void main(){
    FILE *ptr;
    ptr=fopen("test.txt","r");
    if(ptr==NULL){
        printf("file not found");
    }
    char ch=getc(ptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch=getc(ptr);
    }
}