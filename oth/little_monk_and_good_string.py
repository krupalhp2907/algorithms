def maxvovel(arr, Len):
    Max = 0
    count = 0
    flag = False
    vovel = ['a', 'e', 'i', 'o', 'u']

    for i in range(Len):
        if arr[i] in vovel:
            if flag == True:
                count += 1
            else:
                count = 1
                flag = True
        else:
            flag = False
            count = 0

        if Max < count:
            Max = count

    return Max


arr = list(input())
Len = len(arr)
print(maxvovel(arr, Len))