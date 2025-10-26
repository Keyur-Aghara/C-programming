#include <stdio.h>
#include <string.h>
// strstr
void main() {
    char str1[100], str2[100];
    char *result;

    // Input two strings
    printf("Enter the main string: ");
    gets(str1);
    printf("Enter the substring to search: ");
    gets(str2);

    // Search for the substring
    result = strstr(str1, str2);

    if (result) {
        printf("Substring found at position: %ld\n", result - str1);
    } else {
        printf("Substring not found.\n");
    }
}