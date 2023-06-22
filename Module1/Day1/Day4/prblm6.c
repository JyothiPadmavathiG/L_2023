#include <stdio.h>
#include <ctype.h>

void toggleCase(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        i++;
    }
}

int main() {
    char str1[] = "Hello World";
    char str2[] = "A+B";
    char str3[] = "Prog4u";

    printf("Original string 1: %s\n", str1);
    toggleCase(str1);
    printf("Toggled string 1: %s\n", str1);

    printf("Original string 2: %s\n", str2);
    toggleCase(str2);
    printf("Toggled string 2: %s\n", str2);

    printf("Original string 3: %s\n", str3);
    toggleCase(str3);
    printf("Toggled string 3: %s\n", str3);

    return 0;
}
