#include<stdio.h>
#include<string.h>
struct C_book{
    char name[100];
    float price;
};
void main(){
    
    struct C_book b1;
    b1.price=20;
    strcpy(b1.name,"let us C ");
    printf("%s\n",b1.name);
    printf("%f",b1.price);
}