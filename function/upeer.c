#include<stdio.h>
void converttoup(char str1[100]);
void main(){
    char str[100];
    printf("enter a string: ");
    gets(str);
    converttoup(str);
    printf("%s",str);
}
void converttoup(char str1[100]){
    int i=0;
    for(i=0;str1[i]!='\0';i++){
        if(str1[i]>='a' && str1[i]<='z'){
            str1[i]=str1[i]-32;
    }
}
}