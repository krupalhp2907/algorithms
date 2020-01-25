n = int(input())
Str = list(input())
cpy = []
for i in range(0, n):
    if cpy != [] and Str[i] == cpy[-1]:
        del cpy[-1]
        continue
    cpy.append(Str[i])

print(len(cpy))
print("".join(cpy))