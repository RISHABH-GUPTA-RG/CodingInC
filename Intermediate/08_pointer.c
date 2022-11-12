#include<stdio.h>

int main()
{
  int x=3;
  int *j=&x;
  int **k=&j;
  printf("%d\n",x);
  printf("%d\n",j);
  printf("%d\n",*j);
  printf("%d\n",k);
  printf("%d\n",**k);
  return 0;
}