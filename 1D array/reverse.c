#include<stdio.h>
void main() {
    int a[5], i, temp;
    for(i = 0; i < 5; i++) {
        printf("Enter a number: \n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5/2;i++){
        temp=a[i];
        a[i]=a[5-1-i];
        a[5-1-i]=temp;
    }
    printf("Reversed array: ");
    for(i=0;i<5;i++) {
        printf("%d ",a[i]);
    }
}