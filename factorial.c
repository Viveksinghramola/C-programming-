#include <stdio.h>
int fact(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    } 
    else 
    {
        return n * fact(n - 1);
    }
}

int main() 
{
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d\n", num, fact(num));

    return 0;
}
