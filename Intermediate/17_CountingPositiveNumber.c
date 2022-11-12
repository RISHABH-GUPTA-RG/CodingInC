#include <stdio.h>
int countPositivenumber(int *arr, int n)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            printf("%d",arr[i]);
            count += 1;
        }
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the length of array");
    scanf("%d",&n);
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number");
        scanf("%d", &marks[i]);
    }
    printf("The number of positive number is %d",countPositivenumber(marks,n));
    return 0;
}