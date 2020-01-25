noOfPeople = int(input())
minAccoInHouse = int(input())
town = []
for x in range(1, noOfPeople + 1):
    coords = input().split(' ')
    town.append((int(coords[0]), int(coords[1]), x))


def sort(dist):
    xSorted = sorted(dist, key=lambda x: x[0])
    return sorted(xSorted, key=lambda x: x[1])


def arrange(a, m, n):
    d = sort(a)
    print(int(n / m))
    i = 0
    while i <= n:
        if i + 2 * m - n > 0:
            print(n - i)
            for x in range(i, len(d)):
                print(d[x][2], end=" ")
            print(end="\n")
            break
        else:
            print(m)
            for x in range(i, i + m):
                print(str(d[x][2]), end=' ')
            print(end='\n')
        i += m


arrange(town, minAccoInHouse, noOfPeople)
