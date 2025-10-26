#include<stdio.h>
#include<math.h>
void main(){
    float red,green,blue,black,white,cyan,magenta,yellow;
    printf("enter a red colour,green colour,blue colour scale from 0 to 255: \n");
    scanf("%f %f %f",&red,&green,&blue);
    white=fmax(fmax(red/255,green/255),blue/255);
    cyan=(white - (red/255))/white;
    magenta=(white - (green/255))/white;
    yellow=(white - (blue/255))/white;
   black=1 - white;
    if(red==0 && green==0 && blue==0){
        white=0;
        cyan=0;
        magenta=0;
        yellow=0;
        black=0;
    }
    printf("%f\n",white);
    printf("%f\n",cyan);
    printf("%f\n",magenta);
    printf("%f\n",yellow);
    printf("%f\n",black);
}