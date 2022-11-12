#include<stdio.h>
int sum(int a, int b);
int main()
{
    int Returnfromsum;
    Returnfromsum=sum(15,10);
    printf("The sum of %d and %d is %d",15,10,Returnfromsum);
    return 0;
}
int sum(int a, int b){
    int sum=a+b;
    return sum;
}
