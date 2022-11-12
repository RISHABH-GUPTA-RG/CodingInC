#include <stdio.h>
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverse(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - i - 1] = temp;
    }
}
int main()
{
    int n;
    printf("Enter the number of array :");
    scanf("%d", &n);
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the list for position %d", i + 1);
        scanf("%d", &marks[i]);
    }
    printArray(marks, n);
    reverse(marks, n);
    printArray(marks, n);
    return 0;
}