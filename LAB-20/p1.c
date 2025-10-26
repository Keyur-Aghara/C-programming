#include <stdio.h>
#include <string.h>
void main() {
    char str[100];
    int left, right, isPalindrome;

    printf("Enter a string: ");
    gets(str);

    left = 0;
    right = strlen(str) - 1;
    isPalindrome = 1;

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

}
