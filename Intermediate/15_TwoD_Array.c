#include <stdio.h>

int main()
{
    int no_of_student, no_of_subject;
    printf("Enter the number of student ");
    scanf("%d", &no_of_student);
    printf("Enter the number of Subject ");
    scanf("%d", &no_of_subject);
    int marks[no_of_student][no_of_subject];
    for (int i = 0; i < no_of_student; i++)
    {
        for (int j = 0; j < no_of_subject; j++)
        {
            printf("Enter the Marks of the student %d and of subject %d :", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < no_of_student; i++)
    {
        for (int j = 0; j < no_of_subject; j++)
        {
            printf(" [%d] ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}