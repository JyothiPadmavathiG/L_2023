#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    unsigned char *byte_a = (unsigned char *)a;
    unsigned char *byte_b = (unsigned char *)b;
    unsigned char temp;

    for (size_t i = 0; i < size; i++) {
        temp = byte_a[i];
        byte_a[i] = byte_b[i];
        byte_b[i] = temp;
    }
}

int main() {
    int a = 10;
    int b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);

    double x = 3.14;
    double y = 6.28;

    printf("Before swap: x = %f, y = %f\n", x, y);
    swap(&x, &y, sizeof(double));
    printf("After swap: x = %f, y = %f\n", x, y);

    return 0;
}
