#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculate(double input, const double π)
{
    input = input + sin(input);
    if (input != π)
    {
        return calculate(input, π);
    }
    return input;
}

int main()
{
    const double π = 3.141592653589793;
    unsigned input = 0;
    scanf("%lf", &input);
    double calculated = calculate(input, π);
    printf("Calculated Pi: %.15lf", calculated);
}