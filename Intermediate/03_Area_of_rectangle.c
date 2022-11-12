#include<stdio.h>
int area();

int main(){
    int a;
    a=area();
    printf("The area is %d ",a);
    return 0;
}
int area()
{
    int side,lenght;
    printf("Enter the side value ");
    scanf("%d",&side);
    printf("Enter the lenght value ");
    scanf("%d",&lenght);
    return 2*(side+lenght);
}