#include <stdio.h>
int calculateSimpleInterest(float principal, float rate, float time);
void main() {
    float principal, rate, time, interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period in years: ");
    scanf("%f", &time);
    interest = calculateSimpleInterest(principal, rate, time);
    printf("Simple Interest is: %.2f\n", interest);
}
int calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}
