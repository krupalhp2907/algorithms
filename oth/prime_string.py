from math import sqrt
from itertools import count, islice


def isPrime(n):
    return n > 1 and all(n % i for i in islice(count(2), int(sqrt(n) - 1)))


def primeString(arr):
    dist = {}
    for x in arr:
        if x in dist:
            dist[x] += 1
        else:
            dist[x] = 1

    for x in dist:
        if isPrime(dist[x]) == False:
            return "NO"

    return "YES" if isPrime(len(dist)) == True else "NO"


t = int(input())
for _ in range(t):
    arr = list(input())
    print(primeString(arr))
