#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main() {
    char input[] = "darshan*&^%$";
    char str1[100], str2[100];
    int i, j = 0, k = 0;

    // Split the input into str1 and str2
    for (i = 0; input[i] != '\0'; i++) {
        if (isalnum(input[i])){
            str1[j++] = input[i];
        } else {
            str2[k++] = input[i];
        }
    }
    str1[j] = '\0';
    str2[k] = '\0';

    // Append the length of str1 to it
    int len1 = strlen(str1);
    sprintf(str1 + len1, "%d", len1);

    // Append the length of str2 to it
    int len2 = strlen(str2);
    sprintf(str2 + len2, "%d", len2);

    // Print the results
    printf("string-1 = %s\n", str1);
    printf("string-2 = %s\n", str2);
}