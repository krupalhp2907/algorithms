def phi(n):
    result = n
    p = 2
    while (p * p <= n):
        if (n % p == 0):
            result = result * (1.0 - (1.0 / (float)(p)))
        p = p + 1

    if (n > 1):
        result = result * (1.0 - (1.0 / (float)(n)))

    return (int)(result)


def divisors(n):
    count = 0
    for x in range(2, n + 1):
        if n % x == 0:
            count += 1
    return count


q = int(input())
for _ in range(q):
    n = int(input())
    print(n - divisors(n) - phi(n))
