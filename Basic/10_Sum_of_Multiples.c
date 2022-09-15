#include<stdio.h>

int main()
{
    int i=1,sum=0,a=8,temp=0;
    
    while (i<11){
        temp=i*a;
        printf("%d\n",temp);
        sum+=temp;
        i++;
    }
    printf("The sum of all number in the table of 8 (1 to 10) is %d",sum);
    return 0;
}