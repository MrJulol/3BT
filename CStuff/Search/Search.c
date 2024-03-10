#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ARRSIZE 1000000
#define SAMPLESIZE 1000

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int binarySearch(int array[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    FILE *fp;
    fp = fopen("results.csv", "wb");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 0;
    }
    fprintf(fp, "Search ID, TIME1, TIME2\n");

    srand((unsigned)time(NULL));
    int searchfor;
    printf("Enter the number to search: (1-%d)", ARRSIZE);
    scanf("%d", &searchfor);
    for (int j = 0; j < SAMPLESIZE; j++)
    {
        clock_t time;
        int arr[ARRSIZE];
        int isfound = 0;
        for (int i = 0; i < ARRSIZE; i++)
        {
            arr[i] = rand() % 1000000 + 1;
        }
        time = clock();
        for (int i = 0; i < ARRSIZE; i++)
        {
            if (arr[i] == searchfor)
            {
                time = clock() - time;
                isfound = 1;
                break;
            }
        }
        if (!isfound)
        {
            time = 0;
        }
        qsort(arr, ARRSIZE, sizeof(int), cmpfunc);
        int found = 0;
        clock_t time2;
        time2 = clock();
        found = binarySearch(arr, searchfor, 0, ARRSIZE - 1);
        time2 = clock() - time2;
        fprintf(fp, "%d, %lf, %lf\n", j, (double)time / CLOCKS_PER_SEC, (double)time2 / CLOCKS_PER_SEC);
    }
    fclose(fp);

    return EXIT_SUCCESS;
}