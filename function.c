#include <stdio.h>
int op(int, int);
int function(int a, int b,  op(int,int)) 
{
    return op (a, b);
}
int add(int a, int b) 
{
    return a + b;
}

int sub(int a, int b) 
{
    return a - b;
}

int mult(int a, int b) 
{
    return a * b;
}

int main() 
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Addition: %d\n", function(num1, num2, add));
    printf("Subtraction: %d\n", function(num1, num2, sub));
    printf("Multiplication: %d\n", function(num1, num2, mult));

    return 0;
}
