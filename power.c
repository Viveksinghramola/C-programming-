#include <stdio.h>
double power(double base, int exp) 
{
    if (exp == 0)
        return 1;
    else if (exp > 0)
        return base * power(base, exp - 1);
    else
        return (1 / base) * power(base, exp + 1);
}

int main() 
{
    double base;
    int exp;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exp);

    printf("%2lf raised to the power of %d is %2lf\n", base, exp, power(base, exp));

    return 0;
}
