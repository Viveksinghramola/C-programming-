#include <stdio.h>
double convert(double f) 
{
    return (f - 32) * 5 / 9;
}

int main() 
{
    double f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &f);
    c = convert(f);
    printf("%2lf Fahrenheit is equal to %2lf Celsius\n", f, c);

    return 0;
}
