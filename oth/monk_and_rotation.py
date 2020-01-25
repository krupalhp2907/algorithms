def shift(arr, k, len1):
    result = arr[(len1 - k):len1]
    result.extend(arr[0:(len1 - k)])
    return " ".join(result)


t = int(input())
for _ in range(t):
    first = input().split(" ")
    len1 = int(first[0])
    k = int(first[1])
    arr = input().split(" ")
    print(shift(arr, k % len1, len1))
