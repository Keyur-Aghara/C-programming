#include<stdio.h>
void main(){
    int a[100],i,j,count=0,n;
    printf("enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter element: ");
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++){
        if(a[i]<0){
            count++;
        }
    }
    printf("%d",count);
}