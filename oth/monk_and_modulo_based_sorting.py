(n, k) = tuple(map(int, input().split(" ")))
arr = list(map(int, input().split(" ")))


def compare(a):
    return a % k


arr = " ".join(list(map(str, sorted(arr, key=compare))))
print(arr)