#include <stdio.h>
#include <string.h>
int findCharacter(char str[], char ch);
void main() {
    char str[100], ch;
    int position;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to find: ");
    scanf("%c", &ch);
    position = findCharacter(str, ch);
    if (position != -1) {
        printf("Character '%c' found at position %d\n", ch, position);
    } else {
        printf("Character '%c' not found in the string\n", ch);
    }
}
int findCharacter(char str[], char ch) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}
