#!/usr/bin/env python3

import numpy as np


def maximum(lst) -> int:
    max_of_lst = 0
    for i in range(len(lst)):
        if lst[i] > max_of_lst:
            max_of_lst = lst[i]
    return max_of_lst


def minimum(lst) -> int:
    min_of_lst = lst[0]
    for i in range(len(lst)):
        if lst[i] < min_of_lst:
            min_of_lst = lst[i]
    return min_of_lst


def sort_bubble_lst(lst) -> list:
    for i in range(len(lst)):
        for j in range(len(lst) - 1):
            if lst[j] > lst[j + 1]:
                lst[j], lst[j + 1] = lst[j + 1], lst[j]
    return lst


def sort_lst_alpa(lst) -> list:
    for i in range(len(lst)):
        for j in range(len(lst) - 1):
            x = lst[j]
            y = lst[j + 1]
            if x[0] > y[0]:
                lst[j], lst[j + 1] = lst[j + 1], lst[j]
    return lst


def reverse_lst(lst) -> list:
    return lst[::-1]


def sqrt_lst(lst) -> list:
    roots = []
    for i in lst:
        roots.append(i ** (1 / 2))
    return roots


def is_prim(num) -> bool:
    if num == 2 or num == 3:
        return True
    if num < 2 or num % 2 == 0:
        return False
    if num < 9:
        return True
    if num % 3 == 0:
        return False
    r = int(num**0.5)
    f = 5
    while f <= r:
        print("\t", f)
        if num % f == 0:
            return False
        if num % (f + 2) == 0:
            return False
        f += 6
    return True


def arith_lst(lst) -> int:
    ari = 0
    for i in range(len(lst)):
        ari += lst[i]
    ari //= len(lst)
    return ari


def is_palindrom_lst(lst) -> bool:
    rev = lst[::-1]
    if rev == lst:
        return True
    else:
        return False


def delete_zeros_lst(lst) -> list:
    new_lst = []
    for i in lst:
        if i != 0:
            new_lst.append(i)
    return new_lst


def duplicate_lst(lst) -> bool:
    new_lst = []
    for i in lst:
        for j in new_lst:
            if i == j:
                return True
        new_lst.append(i)
    return False


def filter_uneven_lst(lst) -> list:
    uneven = []
    for i in lst:
        if i % 2 != 0:
            uneven.append(i)
    return uneven


def is_anagram_lst(lst1, lst2) -> bool:
    return True if sorted(lst1) == sorted(lst2) else False


def nth_fibonacci(num) -> int:
    return num if num <= 1 else nth_fibonacci(num-1)+nth_fibonacci(num-2)


def my_mergesort(array):
    if len(array) > 1:
        r = len(array) // 2
        left = array[:r]
        middle = array[r:]

        my_mergesort(left)
        my_mergesort(middle)

        i = j = k = 0
        while i < len(left) and j < len(middle):
            if left[i] < middle[j]:
                array[k] = left[i]
                i += 1
            else:
                array[k] = middle[j]
                j += 1
            k += 1

        while i < len(left):
            array[k] = left[i]
            i += 1
            k += 1

        while j < len(middle):
            array[k] = middle[j]
            j += 1
            k += 1


def my_partition_quick(array, low, high) -> int:
    pivot = array[high]

    i = low - 1

    for j in range(low, high):
        if array[j] <= pivot:
            i += 1
            (array[i], array[j]) = (array[j], array[i])
    (array[i + 1], array[high]) = (array[high], array[i + 1])
    return i + 1


def my_quicksort(array, low, high):
    if low < high:
        pi = my_partition_quick(array, low, high)

        my_quicksort(array, low, pi - 1)
        my_quicksort(array, pi + 1, high)


def ggt(num1, num2) -> int:
    if num1 == num2:
        return num1
    else:
        while num2 != 0:
            if num1 > num2:
                num1 -= num2
            else:
                num2 -= num1
    return num1


def kgv(num1, num2) -> int:
    temp = (num1 * num2) // ggt(num1, num2)
    return temp


def geomet(lst) -> int:
    sort_bubble_lst(lst)
    geo = lst[len(lst) // 2]
    return geo


def cubic_root(lst) -> list:
    roots = []
    for i in lst:
        roots.append(i ** (1 / 3))
    return roots


def binayrpow2(a) -> int:
    res = 1
    b = 1
    while b > 0:
        if b & 1:
            res = res * a
        a = a * a
        b >>= 1
    return a


def prime_factors(num) -> list:
    nums = []
    while num % 2 == 0:
        nums.append(2)
        num = num / 2
    for i in range(3, int(np.sqrt(num)) + 1, 2):
        while num % i == 0:
            nums.append(i)
            num = num / i
    if num > 2:
        nums.append(num)
    return nums


def primefactors_lst(lst) -> list:
    factors = []
    for i in lst:
        factors.append(prime_factors(i))
    return factors


def harmonic(lst) -> int:
    harm = 0
    for i in lst:
        harm += 1 / i
    return len(lst) // harm


def subarray(lst):
    max_summ = 0
    summ = 0
    for i in lst:
        summ = summ + i
        if summ < 0:
            summ = 0
        if max_summ < summ:
            max_summ = summ
    return max_summ


def increase(lst) -> int:
    new_lst = [1] * len(lst)

    for i in range(1, len(lst)):
        for j in range(0, i):
            if lst[i] > lst[j] and new_lst[i] < new_lst[j] + 1:
                new_lst[i] = new_lst[j] + 1
    maximum = 0
    for i in range(len(lst)):
        maximum = max(maximum, new_lst[i])


