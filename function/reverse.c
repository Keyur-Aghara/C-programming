#include <stdio.h>

void reverse(int *ptr, int n);

void main() {
    int a[100], i, n;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    reverse(a,n);
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void reverse(int *ptr, int n){
    int i,temp;
    for (i=0;i<n/2;i++) {
        temp=ptr[i];
        ptr[i]=ptr[n-i-1];
        ptr[n-i-1]=temp;
    }
}