from bisect import bisect_right as br

n = int(input())
distance = []
for x in range(n):
    xiyi = input().split(" ")
    xi = int(xiyi[0])
    yi = int(xiyi[1])
    distance.append((xi * xi + yi * yi)**0.5)
distance.sort()
q = int(input())
for _ in range(q):
    r = int(input())
    index = br(distance, r, lo=0, hi=n)
    print(index)