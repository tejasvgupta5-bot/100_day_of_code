#include <stdio.h>

int main() {
    char str[100];
    int count[10] = {0};

    printf("Enter the number: ");
    scanf("%s", str);

    printf("The digits of the number are: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            int digit = str[i] - '0';
            printf("%d ", digit);
            count[digit]++;
        }
    }
    printf("\n");

    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Most frequent digit: %d\n", maxDigit);

    return 0;
}