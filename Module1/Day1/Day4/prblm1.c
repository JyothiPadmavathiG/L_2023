#include <stdio.h>

int main() {
    int arr[] = {12, 84, 20, 36, 64, 56, 72, 10, 45, 90};
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    float avg;

    // Calculating the sum
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }

    // Calculating the average
    avg = (float)sum / len;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
