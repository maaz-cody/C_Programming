/*
Name: Maaz Ismail Sayyed
UIN: 251M019
Class: FE Mechanical Engineering
Div: F(F1)
*/

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safe input

    while (str[i] != '\0') {
        i++;
    }

    // fgets reads newline, so ignore it
    if (str[i-1] == '\n') {
        i--;
    }

    printf("Length of string = %d\n", i);

    return 0;
}
