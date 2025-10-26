// this is wrong program
#include<stdio.h>
void findlargestE(int b[],int size,int *x,int *y);
int main(int *a,int *b,int *c);
void main(){
    int size;
    printf("enter size: ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("enter element: ");
        scanf("%d",&a[i]);
    }
    int index=0,max=0;
    findlargestE(a,size,&max,&index)
    printf("%d %d",max,index);
}
void findlargestE(int b[],int size,int *x,int *y){
   int i,max,index,size;
   max=b[0];
   index=0;
   for(i=0;i<size;i++){
    if(max<b[i]){
        max=b[i];
        index=i;
    }
   }
}