#include<stdio.h>
void fun1();
void main(){
    fun1();
    fun1();
    fun1();
}
void fun1(){
    int a=5;
    static int b=5;
    a++;
    b++;
    printf("%d %d\n",a,b);
}