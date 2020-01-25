import bisect

n = int(input())
arr = list(map(int, input().split(" ")))
arr = sorted(arr)
Query = int(input())
for _ in range(Query):
    q = input().split(" ")
    comp = int(q[1])
    comp_in_arr_right = bisect.bisect_right(arr, comp, lo=0, hi=n)
    comp_in_arr_left = bisect.bisect_left(arr,
                                          comp,
                                          lo=0,
                                          hi=comp_in_arr_right)
    freq_of_comp = comp_in_arr_right - comp_in_arr_left
    if q[0] == '0':
        print(n - comp_in_arr_right + freq_of_comp)
    else:
        print(n - comp_in_arr_right)
