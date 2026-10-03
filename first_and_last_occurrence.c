#include <stdio.h>

// Binary search for the first occurrence
int findFirst(const int nums[], int n, int target) {
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;       // Potential first occurrence found
            right = mid - 1;   // Search further left
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

// Binary search for the last occurrence
int findLast(const int nums[], int n, int target) {
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;       // Potential last occurrence found
            left = mid + 1;    // Search further right
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main(void) {
    int n, target;

    // Input size of array
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int nums[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target value
    scanf("%d", &target);

    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);

    printf("%d,%d\n", first, last);

    return 0;
}