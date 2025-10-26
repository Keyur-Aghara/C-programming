#include<stdio.h>
#include<string.h>
void main(){
    char str[100],ch;
    int i,j;
    printf("enter a string ");
    gets(str);
    printf("enter a char ");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
           break;
        }
    }
    printf("%s",str+i);
}