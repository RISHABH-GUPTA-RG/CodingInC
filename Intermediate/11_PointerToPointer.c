#include<stdio.h>

int main()
{
    int i=142;
    int *j=&i;
    int **k=&j;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",i,j,*j,k,*k,**k);

    return 0;
}