#include <stdio.h>
int main()
{
    int x = 0, y = 1, c, temp;
    printf("Enter the number");
    scanf("%d", &temp);
    for (int i = 0; i < temp; i++)
    {
        printf("%d ", x);
        c = x + y;
        x = y;
        y = c;
    }
    return 0;
}