#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);

    while(str[len] != '\0') {
        len++;
    }

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
