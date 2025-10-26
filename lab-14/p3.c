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
    int evenCount=0,oddCount=0;
    for (int i=0;i<n;i++) {
        if (arr[i]%2==0) {
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
}