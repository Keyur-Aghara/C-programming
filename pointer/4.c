#include<stdio.h>
void main() {
    int a = 10;
    float b = 15.5;
    double c = 20.123456;
    char d = 'X';
    int *intPtr = &a;
    float *floatPtr = &b;
    double *doublePtr = &c;
    char *charPtr = &d;
    printf("Value of a = %d, Address of a = %p, Value at intPtr = %d\n", a, &a, *intPtr);
    printf("Value of b = %.2f, Address of b = %p, Value at floatPtr = %.2f\n", b, &b, *floatPtr);
    printf("Value of c = %.6f, Address of c = %p, Value at doublePtr = %.6f\n", c, &c, *doublePtr);
    printf("Value of d = %c, Address of d = %p, Value at charPtr = %c\n", d, &d, *charPtr);
}