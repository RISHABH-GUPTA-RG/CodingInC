#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    while (*ptr<= 5)
    {
        printf("%d", *ptr);
        printf("%u\n", ptr);
        ptr++;
    }
    return 0;
}