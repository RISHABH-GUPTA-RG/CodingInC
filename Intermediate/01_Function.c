#include <stdio.h>

void display();//function prototype

int main()
{
    printf("This is main\n");
    display();//function calling
    return 0;
}

void display()//fuction defenition
{
    printf("This is Display\n");
}
