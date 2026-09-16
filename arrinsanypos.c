#include <stdio.h>

void insertAt(int arr[], int *n, int val, int pos) {
    for (int i = *n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val;
    (*n)++;
}

int main(void) {
    int arr[10] = {10, 20, 30, 40, 50}, n = 5;
    int val , pos;

    printf("Enter the value to insert: ");
    scanf("%d", &val);
    printf("Enter the position to insert at: ");
    scanf("%d", &pos);

    insertAt(arr, &n, val, pos);

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}