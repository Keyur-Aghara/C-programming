#include<stdio.h>
struct Student{
    int rollno;
    char name[100];
    char gender;
};
void main(){
    struct Student s1[10];
    int i=0;
    for(i=0;i<2;i++){
        printf("Enter roll no of student: ");
        scanf("%d",&s1[i].rollno);
        printf("entr student name: ");
        scanf("%s",&s1[i].name);
        printf("enter M/F: ");
        scanf(" %c",&s1[i].gender);
    }
    for(i=0;i<2;i++){
        printf("\nRoll no: %d\n",s1[i].rollno);
        printf("Name: %s\n",s1[i].name);
        printf("Gender: %c\n",s1[i].gender);
    }
}