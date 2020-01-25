from decimal import Decimal
from math import *
from sympy import diff


def newton_raphson(func: str, a: int, precision: int = 10**-10) -> float:

    x = a
    while True:
        x = Decimal(x) - (Decimal(eval(func)) / Decimal(eval(str(diff(func)))))
        if abs(eval(func)) < precision:
            return float(x)


if __name__ == "__main__":
    print(f"The root of sin(x) = 0 is {newton_raphson('sin(x)', 2)}")
