#include<stdio.h>
int main() {
    int arr[5]; // Declare an array of size 5
    int i;

    // Read elements into the array
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("The elements of the array are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}