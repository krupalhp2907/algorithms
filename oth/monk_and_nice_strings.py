import bisect
n = int(input())
sorted_str = []
for x in range(n):
    ch = input()
    bisect.insort_left(sorted_str, ch)
    print(bisect.bisect_left(sorted_str, ch))