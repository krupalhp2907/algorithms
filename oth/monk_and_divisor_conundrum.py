n = int(input())
arr = list(map(int, input().split(" ")))
q = int(input())
for _ in range(q):
    p, q = tuple(map(int, input().split(" ")))
    count = 0
    for value in arr:
        if value % p == 0 or value % q == 0:
            count += 1
    print(count)