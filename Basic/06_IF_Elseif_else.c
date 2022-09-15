#include <stdio.h>

int main()
{
    int result;
    printf("Enter your result ");
    scanf("%d", &result);

    if (result <= 100 && result >= 90)
    {
        printf("Congratulation you got A grade ");
    }
    else if (result <= 90 && result >= 80)
    {
        printf("Good You got B Grade ");
    }
    else if (result <= 80 && result >= 70)
    {
        printf("You should better next time, You got C grade ");
    }
    else if (result <= 70 && result >= 60)
    {
        printf("You should better next time, You got D grade ");
    }
    else
    {
        printf("You are a faliure to society , You got F grade ");
    }

    return 0;
}