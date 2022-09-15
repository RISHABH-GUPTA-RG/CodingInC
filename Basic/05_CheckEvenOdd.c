#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Enter the Number :");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d number is even", a);
    }
    else
    {
        printf("%d number is odd", a);
    }
    printf("\nEnter any number to exit ");
    scanf("%d",&a);
}