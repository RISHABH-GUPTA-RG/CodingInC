#include <stdio.h>
void printArray(int *arr, int n, int length)
{
    for (int i = 1; i < length + 1; i++)
    {
        arr[i] = n * i;
    }
    for (int i = 1; i < length + 1; i++)
    {
        printf("%d*%d = %d\n",n, i, arr[i]);
    }
}
int main()
{
    int main[3][10];
    printArray(main[0],2,10);
    printArray(main[1],7,10);
    printArray(main[2],9,10);
    return 0;
}