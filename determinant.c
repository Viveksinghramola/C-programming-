#include <stdio.h>
int main() 
{
    int a[2][2];
    int det;
    printf("Enter the elements of the 2x2 matrix \n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    det = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    printf("Determinant of the matrix is %d\n", det);
    return 0;
}