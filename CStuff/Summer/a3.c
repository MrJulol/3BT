#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    char **ptr = malloc(a * sizeof(char *));
    for (int i = 0; i < a; i++)
    {
        *(ptr + i) = (char *)malloc(b * sizeof(char));
    }

    char *temp;
    for (int i = 0; i < a; i++)
    {
        temp = *(ptr + i);
        for (int j = 0; j < b; j++)
        {
            if (i == 0 || i == a - 1 || j == 0 || j == b - 1)
            {
                *(temp + j) = '*';
            }
            else
            {
                *(temp + j) = ' ';
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        temp = *(ptr + i);
        for (int j = 0; j < b; j++)
        {
            printf("%c", *(temp + j));
        }
        printf("\n");
    }

    for (int i = 0; i < a; i++)
    {
        free(*(ptr + i));
    }
    free(ptr);

    return EXIT_SUCCESS;
}