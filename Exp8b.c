/*
Name: Maaz Ismail Sayyed
UIN: 251M019
Class: FE Mechanical Engineering
Div: F(F1)
*/

#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    for (i = 0; str[i] != '\0'; i++);

    // Check palindrome
    for (j = 0; j < i / 2; j++) {
        if (str[j] != str[i - j - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The string is a palindrome.");
    else
        printf("The string is NOT a palindrome.");

    return 0;
}