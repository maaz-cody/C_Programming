/*
Name: Maaz Ismail Sayyed
UIN: 251M019
Class: FE Mechanical Engineering
Div: F(F1)
*/

#include <stdio.h>

int main() {
    int arr[100], n, i, largest;

    // Taking input for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array input
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is largest
    largest = arr[0];

    // Compare with rest of the elements
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output
    printf("Largest element in the array = %d\n", largest);

    return 0;
}