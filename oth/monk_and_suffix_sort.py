import bisect
arr, n = tuple(input().split(" "))
suffix = []
for i in range(len(arr)):
    bisect.insort(suffix, arr[i:len(arr)])
print(suffix[int(n) - 1])
