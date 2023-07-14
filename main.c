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
    /* Calculate answer based on operator condition. */
    if (operator == '+') {
        printf("%f + %f = %f\n", num1, num2, num1 + num2);
    }
    else if (operator == '-') {
        printf("%f - %f = %f\n", num1, num2, num1 - num2);
    }
    else if (operator == '*') {
        printf("%f * %f = %f\n", num1, num2, num1 * num2);
    }
    else if (operator == '/') {
        printf("%f / %f = %f\n", num1, num2, num1 / num2);
    }
    else {
        printf("Invalid operator!\n");
    }
    return 0;
}
