#include<stdio.h>
struct time{
    int h,m,s;
};
void main(){
    struct time t1,t2;
    printf("Enter the time in hours, minutes,second: ");
    scanf("%d %d %d",&t1.h,&t1.m,&t1.s);
    printf("enter second time in hours,minutes,second: ");
    scanf("%d %d %d",&t2.h,&t2.m,&t2.s);
    int sumh,summ,sums;
    sumh=t1.h+t2.h;
    summ=t1.m+t2.m;
    sums=t1.s+t2.s;
    if(sums>60){
        summ=summ+sums/60;
        sums=sums%60;
        if(summ>60){
            sumh=sumh+summ/60;
            summ=summ%60;
        }
    }
    printf("hours=%d and minutes=%d and second=%d",sumh,summ,sums);
}