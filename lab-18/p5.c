#include <stdio.h>
void swapByReference(int *a, int *b);
void main() {
    int x=10, y=20;
    printf("Before swapping: x=%d, y=%d\n", x, y);
    swapByReference(&x, &y);
    printf("After swapping: x=%d, y=%d\n", x, y);
}
void swapByReference(int *a, int *b) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
