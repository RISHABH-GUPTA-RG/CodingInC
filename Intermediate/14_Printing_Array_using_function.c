#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void printArray_using_pointer(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }
}

int main()
{
    int Random[5] = {42, 21, 631, 52, 23};
    printArray(Random, 5);
    printf("\n");
    printArray_using_pointer(&Random[0], 5);
    printf("or\n");
    printArray_using_pointer(Random, 5);
    return 0;
}