#include <stdio.h>

void printNumbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printPattern(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printNumbers(i);
        printSpaces(2 * (n - i));
        printNumbers(i);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
