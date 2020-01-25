result = [-1] * 10
result[0] = result[1] = 1


def factorial(num):

    if num < 0:
        return "Number should not be negative."
    if result[num] != -1:
        return result[num]
    else:
        result[num] = num * factorial(num - 1)
        # uncomment the following to see how recalculations are avoided
        # print(result)
        return result[num]
