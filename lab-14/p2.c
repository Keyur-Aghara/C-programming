#include <stdio.h>
void main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
    int positiveCount=0,negativeCount=0;
    
    for (int i=0;i<n;i++) {
        if (arr[i]>0) {
            positiveCount++;
        } else if (arr[i]<0) {
            negativeCount++;
        }
    }
    printf("Number of positive numbers: %d\n", positiveCount);
    printf("Number of negative numbers: %d\n", negativeCount);
}