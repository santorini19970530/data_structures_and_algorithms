import math

def powers(n):
    y = 0
    while math.pow(2, y) <= n:
        if math.pow(2, y) == n:
            return y
        y += 1
    return False

x = 3
print(f'{x} : {powers(x)}')
