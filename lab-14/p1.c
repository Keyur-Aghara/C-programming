#include <stdio.h>
void main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }
    printf("Numbers in normal order: \n");
    for (int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\nNumbers in reverse order: \n");
    for (int i=n-1;i>=0;i--) {
        printf("%d ",arr[i]);
    }
}