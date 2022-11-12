#include<stdio.h>

int main()
{
    int x;
    printf("Number of students");
    scanf("%d",&x);
    int marks[x];
    for(int i=0;i<x;i++){
        printf("Enter the marks of student%d :",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<x;i++){
        printf("The marks of student%d is %d:\n",i+1,marks[i]);
    }
    return 0;
}