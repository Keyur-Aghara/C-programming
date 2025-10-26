#include<stdio.h>
struct book{
    char title[50];
    char author[50];
    int price;
};
void main(){
    struct book b1[100];
    for(int i=0;i<2;i++){
        printf("Enter the title: ");
        scanf("%s",&b1[i].title);
        printf("enter name of authour: ");
        scanf("%s",&b1[i].author);
        printf("enter price: ");
        scanf("%d",&b1[i].price);
    }
    for(int i=0;i<2;i++){
        printf("\nTitle: %s\n",b1[i].title);
        printf("authour: %s\n",b1[i].author);
        printf("price: %d",b1[i].price);
    }
}