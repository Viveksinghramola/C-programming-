#include <stdio.h>
int main() 
{
    int a[3][3];
    int i, j;
    int f= 1;
    printf("Enter elements of %d x %d matrix \n", 3, 3);
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            if (a[i][j] != a[j][i]) 
            {
                f = 0;
                break;
            }
        }
        if (f==0) 
        {
            break;
        }
    }
    if (f==1) 
    {
        printf("The matrix is symmetric \n");
    } 
    else 
    {
        printf("The matrix is not symmetric \n");
    }

    return 0;
}
