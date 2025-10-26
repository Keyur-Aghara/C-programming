#include<stdio.h>
#include<string.h>
#include<math.h>
struct car{
    char manufacturename[20];
    char modelname[20];
    int price;
};
void main(){
    struct car c[5];
    for(int i=0;i<5;i++){
        printf("Enter detail of car %d\n: ",i+1);
        printf("enter manufacture name of car: ");
        scanf("%s",c[i].manufacturename);
        printf("enter model nameof car: ");
        scanf("%s",c[i].modelname);
        printf("enter price of car: ");
        scanf("%d",&c[i].price);
    }
    for(int i=0;i<5;i++){
        printf("detail of car %d:\n",i+1);
        printf("manufacture=%s\n",c[i].manufacturename);
        printf("model=%s\n",c[i].modelname);
        printf("price=%d\n",c[i].price);
}}