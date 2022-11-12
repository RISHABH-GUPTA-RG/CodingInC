#include<stdio.h>

int main()
{
    /*Making string*/
    // char str[] = {'R','I','S','H','A','B','H','\0'};
    //   or
    char str[]="RISHABH";
    
    /*Printing string*/
    char *ptr=str;//address of First element Will become the value of thr pointer
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;//Increasing The value of address 
    }
    printf("\n");
    //   or
    printf("%s",str);
    return 0;
}