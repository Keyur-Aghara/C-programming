#include <stdio.h>
void printArray(int arr[], int size);
void main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    printArray(a, size);
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}