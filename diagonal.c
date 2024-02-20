#include <stdio.h>
int main() 
{
    int a[3][3];
    int sum = 0;
    printf("Enter elements of %d x %d matrix \n", 3, 3);
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) 
    {
        sum += a[i][i];
    }
    printf("Sum of diagonal elements %d\n", sum);
    return 0;
}
