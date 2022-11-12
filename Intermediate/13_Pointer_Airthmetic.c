#include<stdio.h>

int main()
{
    int i=10,j=11;
    int *ptri=&i,*ptrj=&j;
    printf("Pointer of i %d\n",ptri);
    printf("Value of i %d\n",*ptri);
    printf("Pointer of i %d\n",ptrj);
    printf("Value of j %d\n",*ptrj);
    printf("i+1 %d\n",ptri+1);
    printf("i-1 %d\n",ptri-1);
    printf("pointer of i - pointer of j %d\n",ptri-ptrj);
    if(ptri==ptrj){
        printf("Equal\n");
    }
    else{
        printf("Not equal\n");
    }
    if(ptri-1==ptrj){
        printf("Equal\n");
    }
    else{
        printf("Not equal\n");
    }
    return 0;
}