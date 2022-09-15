#include<stdio.h>
int main()
{
    int principle,years,rate;
    printf("Enter the principle Value ");
    scanf("%d",&principle);
    printf("Enter the Number of years ");
    scanf("%d",&years);
    printf("Enter the Rate of intrest ");
    scanf("%d",&rate);
    int Simple_interest=(principle*rate*years)/100;
    int Amount =principle+Simple_interest;
    printf("The resultant simple interest is %d ", Simple_interest);
    printf("The resultant Amount is %d ", Amount);
    return 0;
}