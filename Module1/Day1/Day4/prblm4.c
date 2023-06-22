#include <stdio.h>

int main() {
    int arr[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
    int len = sizeof(arr) / sizeof(arr[0]);
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < len; i++) {
        if (arr[i] % 2 == 0) {
            
            sumEven += arr[i];
        } else {
        
            sumOdd += arr[i];
        }
    }

    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);
    printf("Difference: %d\n", sumEven - sumOdd);

    return 0;
}
