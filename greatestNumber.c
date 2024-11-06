#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input from the user
    printf("Enter three numbers:\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);

    // Determine the greatest number using ternary operator
   int greatest= num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
    // Output the result
    printf("The greatest number is: %d\n", greatest);

    return 0;
}