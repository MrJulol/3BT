#! /usr/bin/env python3

def partition(array, low, high):
    pivot = array[high]

    i = low -1

    for j in range(low, high):
        if array[j] <= pivot:
            i += 1
            (array[i], array[j]) = (array[j], array[i])
    (array[i+1], array[high]) = (array[high], array[i+1])
    return i+1


def my_quicksort(array, low, high):
    if low < high:
        pivot = partition(array, low, high)

        my_quicksort(array, low, pivot-1)
        my_quicksort(array, pivot+1, high)


a = [12, 11, 13, 5, 6, 7]
print(a)
my_quicksort(a, 0, len(a)-1)
print(a)
