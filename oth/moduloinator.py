t = int(input())
while t > 0:
    c = 0
    x = input().split(" ")
    a = int(x[0])
    b = int(x[1])
    if a - b > b:
        print(1)
    else:
        print(-1)
    t -= 1
