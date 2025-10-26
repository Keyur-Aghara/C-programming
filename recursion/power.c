#include<stdio.h>
#include<math.h>
int power(int base,int exp);
void main() {
    int base, exp; 
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    int result=power(base, exp);
    printf("%d",result);
}
int power(int base,int exp) {
    if (exp==0) {
        return 1;
    }
    return base*power(base,exp-1);
}