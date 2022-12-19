// Addition Program
#include <stdio.h>

int main(void) {
  int integer1;
  int integer2;

  printf("Enter first integer: "); // prompt
  scanf("%d", &integer1);          // read an integer

  printf("Enter second integer: "); // prompt
  scanf("%d", &integer2);

  int sum;                   // variable in which sum will be stored
  sum = integer1 + integer2; // assign total to sum

  printf("Sum is %d\n", sum);
}
