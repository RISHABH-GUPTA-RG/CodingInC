//This is program to make a simple game to guess the number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, user_input, count = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("Enter the guess :");
        count += 1;
        scanf("%d", &user_input);
        if (number == user_input)
        {
            printf("You guessed it right \n");
            printf("You guessed %d in %d chances\n",user_input,count);
        }
        else if (number < user_input)
        {
            printf("The number is smaller \n");
        }
        else if (number > user_input)
        {
            printf("The number is Larger \n");
        }
    } while (number != user_input);
    return 0;
}