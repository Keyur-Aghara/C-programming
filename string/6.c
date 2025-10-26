#include<stdio.h>
#include<string.h>
// strcat
void main(){
    char str1[100],str2[100];
    int i;
    printf("enter a string 1");
    gets(str1);
    printf("enter a string 2");
    gets(str2);
    for(i=0;str1[i]!='\0';i++){
        // value of i become 5
    }
    str1[i++]=' '; // this is optional
    for(int j=0;str2[j]!='\0';j++){
        str1[i]=str2[j];
        i++;
    }
    str1[i]='\0';
    printf("%s",str1);
}