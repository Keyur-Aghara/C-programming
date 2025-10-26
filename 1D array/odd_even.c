#include<stdio.h>
void main(){
    int a[6],i,odd=0,even=0;
    for(i=0;i<6;i++){
   printf("enter number: ");
    scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++){
        if(a[i]%2!=0){
            odd++;
        }
        else{
            even++;
        }
    }
    printf("%d %d",odd,even);
}