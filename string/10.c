#include<stdio.h>
#include<string.h>
void main(){
    char str1[100],str2[100],ch;
    int i,j,n;
    printf("enter a string 1");
    gets(str1);
    printf("enter a string 1");
    gets(str2);
    printf("enter a char");
    scanf("%d",&n)
    for(i=0;str2[i]!=0;i++){
        str1[i]=str2[i];
    }
    str1[i]='\0';
    printf("%s",str1);
}