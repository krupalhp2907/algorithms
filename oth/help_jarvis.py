t = int(input())
while t > 0:
    Str = list(map(int, input()))
    Str.sort()
    flag = "YES"
    for i in range(1, len(Str)):
        if Str[i] - Str[i - 1] != 1:
            flag = "NO"
            break

    print(flag)
    t -= 1
