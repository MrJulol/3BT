#include <stdio.h>
#include <stdlib.h>

#define SIZE 20
#define MYRANDMAX 100

void merge2(int main_arr[], int left, int middle, int right);
void mergesort2(int main_arr[], int left, int right);
void printarr(int main_arr[]);
int *fillarrrand();

int main()
//* Create Arr with random numbrs between 1 and MYRANDMAX the size of SIZE print it, sort it and print again
{
    int *main_arr = fillarrrand();

    printarr(main_arr);

    mergesort2(main_arr, 0, SIZE - 1);

    printarr(main_arr);

    free(main_arr);
}

void mergesort2(int main_arr[], int left, int right)
//*recursive calls to spilt, sort, merge
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;

        mergesort2(main_arr, left, middle);
        mergesort2(main_arr, middle + 1, right);

        merge2(main_arr, left, middle, right);
    }
}
void merge2(int main_arr[], int left, int middle, int right)
//*Create Subarrays, copy main main_arr into subarr, sort these, and copy them back into main_arr
{
    int len_left = middle - left + 1;
    int len_right = right - middle;

    int arr_left[len_left];
    int arr_right[len_left];

    for (int i = 0; i < len_left; i++)
    {
        arr_left[i] = main_arr[left + i];
    }
    for (int i = 0; i < len_right; i++)
    {
        arr_right[i] = main_arr[middle + i + 1];
    }
    int leftindex = 0;
    int rightindex = 0;
    int mergedindex = left;

    while (leftindex < len_left && rightindex < len_right)
    {
        if (arr_left[leftindex] <= arr_right[rightindex])
        {
            main_arr[mergedindex] = arr_left[leftindex];
            leftindex++;
        }
        else
        {
            main_arr[mergedindex] = arr_right[rightindex];
            rightindex++;
        }
        mergedindex++;
    }
    while (leftindex < len_left)
    {
        main_arr[mergedindex] = arr_left[leftindex];
        leftindex++;
        mergedindex++;
    }
    while (rightindex < len_right)
    {
        main_arr[mergedindex] = arr_right[rightindex];
        rightindex++;
        mergedindex++;
    }
}
void printarr(int main_arr[])
//*Print main_arr
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", main_arr[i]);
    }
    printf("\n");
}
int *fillarrrand()
//*Create the main_arr and fill it with random numbers between 1 and MYMAXRAND
{
    int *main_arr = malloc(SIZE * sizeof(int));
    for (int i = 0; i < SIZE; i++)
    {
        main_arr[i] = (rand() % MYRANDMAX) + 1;
    }
    return main_arr;
}