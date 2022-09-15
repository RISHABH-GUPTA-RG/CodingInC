#include<stdio.h>
//Program to solve factorial
int main()
{
    int Num,factorial=1;
    printf("enter the number : ");
    scanf("%d",&Num);

    for(int i=Num;i>0;i--){
        factorial*=i; 
    }
    printf("The factorial of %d is %d",Num,factorial);
    return 0;
}