#include<stdio.h>

int factorial(int x){
    if (x==0 || x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int main()
{
    int f,x;
    printf("Enter the number ");
    scanf("%d",&x);
    f=factorial(x);
    printf("The factorial of %d is %d ",x,f);
    return 0;
}