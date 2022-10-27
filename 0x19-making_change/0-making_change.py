#!/usr/bin/python3
"""
def makeChange(coins, total)
"""


def makeChange(coins, total):

    """Given a pile of coins of different values,
    determine the fewest number of coins
    needed to meet a given amount 'total'
    Args:
        coins ([list]): a list of the values of the coins in your possession
        total ([number]): amount
    Return: fewest number of coins needed to meet total
    """

    if total <= 0:
        return 0

    coins.sort(reverse=True)
    
    i, moneda = (0, 0)
    valorTotal = total
    len_coins = len(coins)

    while(i < len_coins and valorTotal > 0):
        if (valorTotal - coins[i]) >= 0:
            valorTotal -= coins[i]
            moneda += 1
        else:
            i += 1

    check = valorTotal > 0 and moneda > 0
    return -1 if check or moneda == 0 else moneda
