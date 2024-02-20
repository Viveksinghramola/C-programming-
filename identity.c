#include <stdio.h>
int main() 
{
    int a[10][10];
    int i, j, size;
    int f = 1;

    printf("Enter the size of the square matrix ");
    scanf("%d", &size);
    printf("Enter the elements of the square matrix ");
    for (i = 0; i < size; i++) 
    {
        for (j = 0; j < size; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < size; i++) 
    {
        for (j = 0; j < size; j++) 
        {
            if (i != j && a[i][j] != 0) 
            {
                f = 0;
                break;
            }
            else if (i == j && a[i][j] != 1) 
            {
                f = 0;
                break;
            }
        }
    }
    if (f==1) 
    {
        printf("The matrix is an identity matrix.\n");
    } 
    else 
    {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}
