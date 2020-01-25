def dDays_eff(people, days, points, deduce):
    for x in range(people):
        flag = True
        for y in range(days):
            if points[x] != 0 and ((x + 1) % (y + 1)) == 0:
                if points[x] - deduce[y] <= 0:
                    flag = False
                    points[x] = 0
                    print(y + 1)
                    break
        if flag:
            print(-1)


testCase = int(input())
inputArray = []
for x in range(testCase):
    firstLine = input().split(' ')
    dDays_eff(int(firstLine[0]), int(firstLine[1]),
              list(map(int,
                       input().split(' '))), list(map(int,
                                                      input().split(' '))))
