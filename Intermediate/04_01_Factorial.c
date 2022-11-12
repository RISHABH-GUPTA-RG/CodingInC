#include <stdio.h>
int factorial(int x)
{
    switch (x)
    {
    case 0:
        return 1;
    case 1:
        return 1;
        break;
    }
    return x * factorial(x - 1);
}
int main()
{
    int fact, x;
    printf("Enter the number ");
    scanf("%d", &x);
    fact=factorial(x);
    printf("%d",fact);
}
