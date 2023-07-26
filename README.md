# C Programming Calculator

## Description
My second C programming project, learning to create a calculator in C.

Link to the original C programming link:<a href="https://github.com/deanalex-buno95/cprogram"> https://github.com/deanalex-buno95/cprogram </a>

## Lessons Taken

### Lesson 9
This lesson involves taking the inputs of the user and adding the numbers together

Input:
```
#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Declare two numbers */
    double num1;
    double num2;
    /* Enter numbers */
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    /* Calculate answer. */
    printf("%f + %f = %f\n", num1, num2, num1 + num2);
    return 0;
}
```

Output:
```
Enter first number: <enter 'num1' here>
Enter second number: <enter 'num2' here>
'num1' + 'num2' = sum of 'num1' + 'num2'
```

### Lesson 15
In this lesson, I improve the calculator by adding an operator char, followed by using the if-elseif-else statements for doing the calculation based on the chosen operator and numbers.

Input:
```
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
```

Output:
```
Enter first number: <enter 'num1' here>
Enter operator: <enter 'op' here>
Enter second number: <enter 'num2' here>
{
Either 'num1' 'op' 'num2' = calculation of 'num1' 'num2' with 'op'
Or print "Invalid operator!"
}
```
