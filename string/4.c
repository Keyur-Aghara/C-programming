#include<stdio.h>
#include<string.h>
// strcmp
void main(){
    char s1[100],s2[100];
    printf("enter a string: ");
    gets(s1);
    printf("enter a string: ");
    gets(s2);
    int len1=strlen(s1);
    int len2=strlen(s2);
    int max=(len1>len2)?len1:len2;
    int flag;
    for(int i=0;i<max;i++){
      if(s1[i]!=s2[i]){
        flag=1;
        break;
       }
    }
    if(flag==1){
        printf("strings are not same");
    }
    else{
        printf("strings are same");
    }
}