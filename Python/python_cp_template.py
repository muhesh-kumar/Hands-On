# IMPORTS

from math import *
from re import *
from itertools import *


# CONSTANTS, LISTS

mod = 1000000007
alphs = list(map(chr, range(97, 123)))
vowels = "aeiouAEIOU"


# CUSTOM FUNCTIONS

iinp = lambda : int(input())
inp  = lambda : input()
intl = lambda : list(map(int, input().split()))
strl = lambda : list(map(str, input().split()))
no_of_digits = lambda n: floor(log10(n)) + 1
is_perfect_square = lambda n: (int(sqrt(n))*int(sqrt(n))) == n 


def binary_search(arr, l, r, x):
    if x < arr[0] or x > arr[len(arr) - 1]:
        return -1
    while l <= r:
        mid = l + (r - l) // 2
        if arr[mid] == x:
            return mid
        elif arr[mid] < x:
            l = mid + 1
        else:
            r = mid - 1
    return -1

def binpow(a, b):
    res = 1
    while b > 0:
        if b & 1: res *= a
        a *= a
        b >>= 1
    return res

def is_prime(n):
    if n == 2: return True
    elif n == 1 or n % 2 == 0: return False
    else:
        for i in range(3, int(sqrt(n)) + 1, 2):
            if n % i == 0: return False
        return True

def sieve(n):
    lis = []
    primes = [True for i in range(n + 1)]
    for i in range(2, int(sqrt(n)) + 1):
        if primes[i]:
            for j in range(i*i, n + 1, i):
                primes[j] = False
    for i in range(2, n + 1):
        if primes[i]: lis.append(i)
    return lis

def prime_factors(n):
    lis = []
    while n % 2 == 0:
        lis.append(2);
        n //= 2
    for i in range(3, int(sqrt(n)) + 1, 2):
        while n % i == 0:
            lis.append(i)
            n //= i
    if n > 2: lis.append(n)
    return lis

def no_of_divisors(n):
    cnt = 0
    for i in range(1, int(sqrt(n)) + 1):
        if n % i == 0:
            if n//i == i: cnt += 1
            else: cnt += 2
    return cnt

def divisors(n):
    lis = []
    for i in range(1, int(sqrt(n)) + 1):
        if n % i == 0:
            if n // i == i:
                lis.append(i)
            else:
                lis.extend([i, n//i])
    return lis

def is_subsequence(s1, s2):
    return s1.find(s2) == -1


# MAIN CODE

def solve():
    

solve()