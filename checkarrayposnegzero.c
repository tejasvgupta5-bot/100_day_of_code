#include<stdio.h>
int main() {
    int arr[10]; // Declare an array of size 10
    int i, positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Read elements into the array
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero numbers
    for (i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    // Print the counts
    printf("Number of positive numbers: %d\n", positiveCount);
    printf("Number of negative numbers: %d\n", negativeCount);
    printf("Number of zeros: %d\n", zeroCount);

    return 0;
}