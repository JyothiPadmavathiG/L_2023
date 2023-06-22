#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int i, j;
    int smallestDigit = 9, largestDigit = 0;
    int isValid = 1;

    for (i = 0; i < n; i++) {
        int num = numbers[i];
        
        if (num < 0) {
            isValid = 0;
            break;
        }

        while (num > 0) {
            int digit = num % 10;
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            if (digit > largestDigit) {
                largestDigit = digit;
            }
            num /= 10;
        }
    }

    if (isValid) {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    } else {
        printf("Not Valid\n");
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input! n should be a positive integer.\n");
        return 1;
    }

    int numbers[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("n%d = ", i+1);
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}
