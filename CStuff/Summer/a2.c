#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int a = 2;
    int b = 4;

    printf("%d, %d\n", a, b);
    swap(&a, &b);
    printf("%d, %d\n", a, b);

    return EXIT_SUCCESS;
}