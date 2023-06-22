#include <stdio.h>

void printBits(unsigned int num) {
    int i;
    unsigned int mask = 1 << 31;

    for (i = 0; i < 32; i++) {
        
        printf("%d", (num & mask) ? 1 : 0);

    
        mask >>= 1;
    }
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);
    printf("Bits: ");
    printBits(num);
    printf("\n");
    return 0;
}
