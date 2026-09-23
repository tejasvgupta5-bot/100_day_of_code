#include <stdio.h>

void printCharsOnNewLines(const char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
}

int main(void) {
    char str[1000];

    // Read an entire line including spaces
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    // Strip trailing newline character ('\n') left by fgets
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    printCharsOnNewLines(str);

    return 0;
}