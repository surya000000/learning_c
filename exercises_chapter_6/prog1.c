// Program to calculate the absolute value of an integer
#include <stdio.h>
int main(void){
  int number;
  printf("Type the number\n");
  scanf("%i", &number);
  printf("The absolute value for %i\n", number);
  if (number < 0){
    number = -number;
  }
  printf("The absolute value is %i\n", number);
  return 0;
}
