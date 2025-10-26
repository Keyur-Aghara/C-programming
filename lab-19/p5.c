#include <stdio.h>
#include <string.h>
void replaceChar(char str[], char oldChar, char newChar);
void main(){
    char str[100], oldChar, newChar;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the character to be replaced: ");
    scanf("%c", &oldChar);
    getchar();
    printf("Enter the new character: ");
    scanf("%c", &newChar);
    replaceChar(str, oldChar, newChar);
    printf("Modified string: %s\n", str);
}
void replaceChar(char str[], char oldChar, char newChar){
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}