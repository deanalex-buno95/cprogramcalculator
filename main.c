#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Declare two numbers */
    double num1;
    double num2;
    char operator;
    /* Enter numbers */
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    /* Print answer (add both numbers together) */
    printf("Answer: %f", num1 + num2);
    return 0;
}
