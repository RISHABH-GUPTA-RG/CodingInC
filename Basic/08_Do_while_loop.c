#include <stdio.h>

int main()
{
    int a = 10,b;
    printf("Enter a number ");
    scanf("%d", &a);

    printf("Entered number is %d \n", a);
    b=a;
    do
    {
        printf("%d\n", a);
        a += b;
    } while (a <= 100);

    return 0;
}