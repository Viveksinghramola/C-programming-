#include <stdio.h>
int main() 
{
    int a[3][3];
    int i, j;
    printf("Enter elements of %d x %d matrix \n", 3, 3);
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Maximum elements in each row \n");
    for (i = 0; i < 3; i++) 
    {
        int max = a[i][0]; 
        for (j = 1; j < 3; j++) 
        {
            if (a[i][j] > max) 
            {
                max = a[i][j];
            }
        }

        printf("Row %d: %d\n", i + 1, max);
    }

    return 0;
}