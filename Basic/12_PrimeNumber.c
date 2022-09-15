#include <stdio.h>
//Program to find prime number

int main()
{
    int Num = 0, count = 0;
    printf("Enter the number ");
    scanf("%d", &Num);

    for (int i = 2; i < Num; i++)
    {
        if (Num % i == 0)
        {
            printf("%d\n", i);
            count = 1;
            break;
        }
    }
    if (count >= 1)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }

    return 0;
}