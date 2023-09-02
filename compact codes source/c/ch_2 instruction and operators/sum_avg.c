//sum and average of number given by user?
#include <stdio.h>

int main()
{
  int count = 0;
  float sum = 0;
  float numbers;
  printf("Enter numbers to find the average (0 to stop)\n");
  do {
    scanf("%f", &numbers);
    count++;
    sum += numbers;
  } while(numbers != 0);

  printf("Result: %f", sum/(count-1));
  return 0;
}




