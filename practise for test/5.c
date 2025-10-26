#include<stdio.h>
void main(){
    char str[100],vowel=0,consonant=0;
    printf("Enter a string:");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowel++;
        }
        else{
            consonant++;
        }
    }
    printf("vowels=%d consonant=%d",vowel,consonant);
}