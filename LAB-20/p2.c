#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    char *ptr1, *ptr2;

    printf("Enter a string: ");
    gets(str);

    ptr1 = str;
    ptr2 = str;

    while (*ptr1 != '\0') {
        if (isalnum(*ptr1)) {
            *ptr2 = *ptr1;
            ptr2++;
        }
        ptr1++;
    }
    *ptr2 = '\0';

    printf("String after removing spaces and special characters: %s\n", str);

    return 0;
}
