from bisect import bisect_left
l = []
for _ in range(int(input())):
    l.append([int(i) for i in input().split()])

l.sort()
tot = 1
newl = [l[0][1]]
for i in range(1, len(l)):
    ind = bisect_left(newl, l[i][1])
    print("mewl", newl, "ind", ind)
    if ind == len(newl):
        newl.append(l[i][1])
        tot += 1
    else:
        newl[ind] = l[i][1]
    print(newl)
print(tot)