#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Adding the numbers
    sum = num1 + num2;

    // Displaying the result
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
