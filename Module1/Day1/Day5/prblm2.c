#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex readComplex() {
    struct Complex num;
    
    printf("Enter the real part: ");
    scanf("%f", &num.real);
    
    printf("Enter the imaginary part: ");
    scanf("%f", &num.imag);
    
    return num;
}

void writeComplex(struct Complex num) {
    printf("The complex number is: %.2f + %.2fi\n", num.real, num.imag);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex sum;
    
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    
    return sum;
}

struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex product;
    
    product.real = num1.real * num2.real - num1.imag * num2.imag;
    product.imag = num1.real * num2.imag + num1.imag * num2.real;
    
    return product;
}

int main() {
    struct Complex num1, num2, sum, product;
    
    printf("Enter the first complex number:\n");
    num1 = readComplex();
    
    printf("Enter the second complex number:\n");
    num2 = readComplex();
    
    printf("\n");
    
    printf("First complex number:\n");
    writeComplex(num1);
    
    printf("Second complex number:\n");
    writeComplex(num2);
    
    printf("\n");
    
    sum = addComplex(num1, num2);
    printf("Sum of the two complex numbers:\n");
    writeComplex(sum);
    
    product = multiplyComplex(num1, num2);
    printf("Product of the two complex numbers:\n");
    writeComplex(product);
    
    return 0;
}
