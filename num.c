#include <stdio.h>

int main() {
  int num1, num2;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Finding the smallest number   smallestNumber
    //float smallestNumber = (num1 < num2) ? num1 : num2;

    // Printing the result
    printf("The smallest number is: %d\n",(num1 < num2) ? num1 : num2);

    return 0;
}