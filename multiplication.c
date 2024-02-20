#include <stdio.h>
int main() {
    int a[10][10], b[10][10], res[10][10];
    int i, j, k, r1, c1, r2, c2;

    printf("Enter the number of rows and columns of the first matrix ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the elements of the first matrix ");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix ");
    scanf("%d %d", &r2, &c2);

    printf("Enter the elements of the second matrix ");
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (c1 != r2) {
        printf("Error: The matrices cannot be multiplied ");
        return 1;
    }
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            res[i][j] = 0;
            for (k = 0; k < c1; k++) 
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Result of matrix multiplication \n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
