#include <stdio.h>

int main() {
    int arr[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
    int len = sizeof(arr) / sizeof(arr[0]);
    int sumEvenIndexed = 0;
    int sumOddIndexed = 0;

    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) {
        
            sumEvenIndexed += arr[i];
        } else {
            sumOddIndexed += arr[i];
        }
    }

    printf("Sum of even indexed elements: %d\n", sumEvenIndexed);
    printf("Sum of odd indexed elements: %d\n", sumOddIndexed);
    printf("Difference: %d\n", sumEvenIndexed - sumOddIndexed);

    return 0;
}