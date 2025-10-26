#include<stdio.h>
void main(){
    char str1[100],str2[100];
    char *ptr,*ptr1;
    printf("enter a string: ");
    gets(str1);
    printf("%d %d",&str1,&str2);
    ptr=str1;
    ptr1=str2;
    for(;*ptr!='\0';){
        if(*ptr!=' '){
             *ptr1=*ptr;
             ptr1++;
        }
        ptr++;
    }
    *ptr1='\0';
    printf("%s",str2);
}