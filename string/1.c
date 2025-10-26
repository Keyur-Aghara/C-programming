#include<stdio.h>
void main(){
    char str[100];
    printf("enter a string: ");
    scanf("%[^\n]s",&str);
    printf("%s",str);
}