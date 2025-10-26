#include<stdio.h>
void main(){
    char str1[100];
    char *ptr;
    printf("enter a string: ");
    gets(str1);
   // printf("%d ",&str1);
    ptr=str1;
    //200=h,201=e,202=l....,s05='\0'
   // printf("%d ",ptr);
    for(;*ptr!='\0';){
        if(*ptr!=' '){
             printf("%d %c ",ptr,*ptr);
        }
        ptr++;
    }
}