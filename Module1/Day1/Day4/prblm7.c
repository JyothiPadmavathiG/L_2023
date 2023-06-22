#include <stdio.h>

int stringToInteger(char str[]) {
    int i = 0;
    int res = 0;

    while (str[i] != '\0') {
        int ival = str[i] - '0';  // Convert character to integer value
        res = res * 10 + ival;    // Build the integer by multiplying by 10 and adding the digit value
        i++;
    }

    return res;
}

int main() {
    char str[] = "5278";

    printf("Input string: %s\n", str);
    int result = stringToInteger(str);
    printf("Converted integer: %d\n", result);

    return 0;
}
