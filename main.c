#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Declare two numbers */
    int num1;
    int num2;
    /* Enter numbers */
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    /* Print answer (add both numbers together) */
    printf("Answer: %d", num1 + num2);
    return 0;
}
