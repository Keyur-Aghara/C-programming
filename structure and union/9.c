#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("text.txt", "r");
    int temp,sum=0;
    while(fscanf(fp,"%d",&temp)==1){
        sum+=temp;
    }
    printf("%d",sum);
    fclose(fp);
}