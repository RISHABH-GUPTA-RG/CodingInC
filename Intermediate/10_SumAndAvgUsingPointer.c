#include <stdio.h>

void SumAndAvg(int x, int y, int *sum, float *avg)
{
  *sum = x + y;
  *avg = (float)(x + y) / 2;
}
int main()
{
  int i = 356575686, j=353465634, sum;
  float avg;
  SumAndAvg(i, j, &sum, &avg);
  printf("The sum of %d and %d is %d\n", i, j, sum);
  printf("The avg of %d and %d is %.2f\n", i, j, avg);
  return 0;
}