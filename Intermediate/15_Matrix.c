#include <stdio.h>
/*{
[11,12,13...1n],
[21,22,23...2n],
[31,32,33...3n],
[.1,.2,.3....n],
[.1,.2,.3....n],
[m1,m2,m3...mn],
}
*/
int main()
{
    int x, y;
    printf("Enter the number of rows:-");
    scanf("%d", &x);
    printf("Enter the number of Column:-");
    scanf("%d", &y);
    int matrix[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter the number for index %d,%d:-", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    printf("The matrix is:-\n");

    for (int i = 0; i < x; i++)
    {
        printf("[ ");
        for (int j = 0; j < y; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("]\n");
    }

    return 0;
}