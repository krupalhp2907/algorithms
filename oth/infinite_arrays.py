def solve(a, r, l):
    _sum = sum(a)
    n = len(a)
    #case 1:
    #when both get reminder 3 is 0
    if (r % n == 0 and l % n == 0) or (r == 1 and l % n == 0):
        if r == 1: return int((l / n)) * _sum
        return int((l - r) / 3) * _sum + a[-1]

    #case 2:
    #when none is divisible by 3
    if r % n != 0 and l % n != 0:
        rem = r % n - 1
        sum_left = 0
        for x in range(rem, n):
            sum_left += a[x]
        rem = l % n
        sum_right = 0
        for x in range(0, rem):
            sum_right += a[x]
        repetations = ((l - l % n - r + r % n) / n) - 1
        return int(repetations * _sum + sum_left + sum_right)

    #case 3:
    #when any one is divisible
    if r % n == 0 and l % n != 0:
        repetations = (l - l % n - r) / n
        rem = l % n - 1
        sum_right = 0
        for x in range(0, rem + 1):
            sum_right += a[x]
        return int(repetations * _sum + sum_right + a[-1])

    if r % n != 0 and l % n == 0:
        repetations = ((l - r + r % n) / n) - 1
        rem = r % n - 1
        sum_left = 0
        for x in range(rem, n):
            sum_left += a[x]
        return int(repetations * _sum + sum_left)


T = int(input())
for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))
    Q = int(input())
    L = list(map(int, input().split()))
    R = list(map(int, input().split()))
    ans = []
    for x, y in zip(R, L):
        ans.append(solve(A, y, x))

    print(' '.join(map(str, ans)))
