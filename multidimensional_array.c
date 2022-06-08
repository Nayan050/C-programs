#include <stdio.h>
int main()
{
    int arr[3][4];
    int i, j;
    printf("Enter the elements of 3*4 matrix : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The entered Matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", arr[i][j]);
            if (j == 3)
                printf("\n");
        }
    }
}