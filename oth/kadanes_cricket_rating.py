def kadanes(arr):
    curr_max = global_max = arr[0]
    for i in range(1, n):
        curr_max = max(arr[i], curr_max + arr[i])
        if curr_max > global_max:
            global_max = curr_max
    return global_max


n = int(input())
array = list(map(int, input().split()))
print(kadanes(array))