#include<stdio.h>
#include<string.h>
// strcpy
void main(){
    char str1[100],str2[100],i;
    printf("enter a string 1");
    gets(str1);
    printf("enter a string 2");
    gets(str2);
    for(i=0;str2[i]!='\0';i++){
        str1[i]=str2[i];
    }
    str1[i]='\0';
    printf("string=%s",str1);
}