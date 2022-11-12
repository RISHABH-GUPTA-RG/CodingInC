#include <stdio.h>

void main_swap(int *x, int *y);
void wrong_swap(int x, int y);

int main()
{
  int x=3,y=5;
  printf("The value of x and y before swap is %d and %d \n",x,y);
  wrong_swap(x,y);
  printf("The value of x and y after swap is  %d and %d\n",x,y);
  printf("The value of x and y before swap is %d and %d \n",x,y);
  main_swap(&x,&y);
  printf("The value of x and y after swap is  %d and %d\n",x,y);
}

void main_swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}
void wrong_swap(int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}