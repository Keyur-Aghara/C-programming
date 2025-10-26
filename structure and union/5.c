#include<stdio.h>
struct ss{
    int a;
    float b;
    char c;
};
void main(){
    struct ss s1;
    printf("%d",sizeof(s1));
}