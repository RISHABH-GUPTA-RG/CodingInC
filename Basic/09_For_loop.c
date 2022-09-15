#include <stdio.h>

int main()
{
    int a;
    printf("Enter the Number :");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("%d\n", i + 1);
    }

    return 0;
}