x = list(map(int, input().split(" ")))
M = x[1]
k = 1
for i in range(M):
    k = (k * (M - i)) % (10**9 + 7)
print(k)