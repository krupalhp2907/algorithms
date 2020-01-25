def countVovel(arr, arr2):
    count = 0
    for i in range(len(arr)):
        if arr[i] in arr2:
            count += 1
    return count


t = int(input())
for _ in range(t):
    vovel = ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u']
    arr = list(input())
    print(countVovel(arr, vovel))