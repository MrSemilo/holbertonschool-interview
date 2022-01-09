#!/usr/bin/python3
"""Operations"""


def minOperations(n):
    """ function"""
    if not isinstance(n, int) or n < 2:
        return 0
    operation = 0
    i = 3

    while n % 2 == 0:
        operation += 2
        n = n//2
    while i <= n:
        while n % i == 0:
            operation += i
            n = n//i
        i += 2
    return int(operation)
