def maxHeightDiff(arr, n):
    dist = {}
    for x in arr:
        if x in dist:
            dist[x] += 1
        else:
            dist[x] = 1
    dist_val = lambda k: dist[k]
    key_max = max(dist, key=dist_val)
    key_min = min(dist, key=dist_val)
    return -1 if dist[key_max] - dist[key_min] == 0 else dist[key_max] - dist[
        key_min]


t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split(" ")))
    print(maxHeightDiff(arr, n))