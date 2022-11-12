#include <stdio.h>
#include <math.h>
int isPowerof(int x, int y);//fucntion prototpe
//main
int main()
{
    int x, y;
    printf("Enter the number ");
    scanf("%d", &x);
    printf("Enter the power to check");
    scanf("%d", &y);
    (isPowerOf(x, y) == 1) ? printf("True") : printf("False");
    return 0;
}
//def of fuction
int isPowerOf(int x, int y)
{
    //base change formula (property of log)
    /*logab*/
    double p = log10(x) / log10(y);
    if (p - (int)p == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}
