a = int(input())
for i in range(0, a):
    a = input()
    a = a.swapcase()
    b = a[::-1]
    if (a == b):
        c = len(a)
        if (c % 2 == 0):
            print("YES EVEN")
        else:
            print("YES ODD")
    else:
        print("NO")