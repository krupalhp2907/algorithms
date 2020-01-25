Str = list(input())
cpy = []
for i in range(0, len(Str)):
    if cpy != [] and Str[i] == cpy[-1]:
        del cpy[-1]
        continue
    cpy.append(Str[i])

if len(cpy) == 0:
    print("Empty String")
else:
    print("".join(cpy))