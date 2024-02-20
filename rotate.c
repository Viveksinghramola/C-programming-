#include <stdio.h>
int main() 
{
  int i,j,temp,start,end;
    int a[3][3];
    printf("Enter elements of %d x %d matrix \n", 3, 3);
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Original matrix \n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++) 
    {
        for (j = i + 1; j < 3; j++) 
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for (i = 0; i < 3; i++) 
    {
        start = 0;
        end = 3 - 1;
        while (start < end) 
        {
            temp = a[i][start];
            a[i][start] = a[i][end];
            a[i][end] = temp;
            start++;
            end--;
        }
    }

    printf("Matrix after rotating 90 degrees clockwise \n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
