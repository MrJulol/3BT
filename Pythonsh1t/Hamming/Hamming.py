#!/usr/bin/env python3

import numpy as np
from random import randrange


def is_power_of_two(n) -> bool:
    return (n & (n - 1)) == 0


def fill_bits(data) -> list:
    data.reverse()
    new_data = []
    for i in range(len(data) + 1):  # <= len
        if is_power_of_two(len(new_data) + 1):
            new_data.append(2)
        if i != 0:
            new_data.append(data[i - 1])
    return new_data


def get_indices_of_ones(lst) -> list:
    indexes = []
    for i in range(len(lst)):
        if lst[i] == 1:
            indexes.append(i + 1)
    return indexes


def add_without_carry(arr):
    binsum = 0
    for i in arr:
        binsum ^= i
    return bin(binsum)
    
def bin_to_int_list(b) -> list:
    return [int(b[i]) for i in range(2, len(b))]


def fill_parity_bits(lst, bts) -> list:
    a = 0
    for i in range(len(lst)):
        if lst[i] == 2:
            bts.append(0)
            lst[i] = bts[a]
            a += 1
    return lst


def create_sample(freq, t_start, t_end) -> list:
    return [(-(np.sin(freq*2*np.pi*i)))for i in np.linspace(t_start, t_end, t_end-t_start+1, endpoint=False)]


def sample_modulation(lst, sample) -> list:
    return [sample if i == 1 else [0]*100 for i in lst]


def flatten(lst) -> list:
    return [j for i in lst for j in i]


def split_every(n, lst) -> list:
    return [lst[i*n:i*n+n] for i in range(len(lst)//n)]


def sum_intervals(lst) -> list:
    return [np.sum(np.abs(i)) for i in lst]


def threshold(lst, t) -> list:
    return [0 if i < t else 1 for i in lst]


def random_bit_flip(lst) -> list:
    flip = randrange(len(lst)-1)
    if lst[flip] == 0:
        lst[flip] = 1
    else:
        lst[flip] = 0
    return lst


d = [0, 0, 1, 1, 0, 0, 1, 0]
print("Start mit bits:         ", d)

data_filled = fill_bits(d)
print("Platzhalter einfügen:   ", data_filled[::-1])

indices = get_indices_of_ones(data_filled)
print("1ser Stellen bestimmen: ", indices)

parityBinary = add_without_carry(indices)
print("Stellen binär addieren: ", parityBinary)

parityBits = bin_to_int_list(parityBinary)
print("Binärzahl als Liste:    ", parityBits)

parityBits.reverse()
hamming = fill_parity_bits(data_filled, parityBits)
hamming.reverse()
print("Paritätsbits einfügen:  ", hamming)

sampleAM = create_sample(2, 0, 100)
modulation = flatten(sample_modulation(hamming, sampleAM))
deModuliert = threshold(sum_intervals(split_every(100, modulation)), 30)
decode1 = bin_to_int_list(add_without_carry(
    get_indices_of_ones(deModuliert[::-1])))

print("Hamming-kodiert: ", hamming)
print("De-moduliert:    ", deModuliert)
print("Fehler:          ", not(deModuliert == hamming))
print("Fehlerstelle, 0 = kein Fehler: ", decode1)

print("Übertragung Hamming kodiert:                 ", deModuliert)
modulation_error = random_bit_flip(deModuliert)
print("Zufällig generierter Fehler:                  ", modulation_error)
print("De-kodierung gibt Stelle von Fehler in binär: ",
      bin_to_int_list(add_without_carry(get_indices_of_ones(modulation_error[::-1]))))
