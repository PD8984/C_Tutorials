// Program uses six if statement to compare two numbers entered by the user.
// If the condition in any of these if statement is true, the printf statement
// associated with that if executes.

#include <stdio.h>

int main(void) {
  printf("Enter two integers, and I will tell you\n");
  printf("The relationship they satisfy: ");

  int num1, num2;
  scanf("%d %d", &num1, &num2); // read two integer

  if (num1 == num2) {
    printf("First integer is equal to second integer\n");
  }

  if (num1 != num2) {
    printf("First integer is not equal to second integer\n");
  }

  if (num1 < num2) {
    printf("First integer is smaller then second integer\n");
  }

  if (num1 > num2) {
    printf("First integer is greater then second integer\n");
  }

  if (num1 <= num2) {
    printf("First integer is smaller than or equal to second integer\n");
  }

  if (num1 >= num2) {
    printf("First integer is greater than or equal to second integer\n");
  }
}
