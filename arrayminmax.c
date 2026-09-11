#include<stdio.h>
int main() {
    int arr[5]; // Declare an array of size 5
    int i, max, min;

    // Read elements into the array
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element of the array
    max = arr[0];
    min = arr[0];

    // Find the maximum and minimum elements in the array
    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the maximum and minimum elements
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}