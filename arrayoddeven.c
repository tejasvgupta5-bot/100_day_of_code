#include<stdio.h>
int main() {
    int arr[10]; // Declare an array of size 10
    int i, evenCount = 0, oddCount = 0;

    // Read elements into the array
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Print the counts
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}