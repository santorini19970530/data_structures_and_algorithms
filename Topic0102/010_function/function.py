import math

def myFunction(m):
    x = math.floor(m / 2)
    for i in range(10):
        x += (m + i)
    return x

print(myFunction(5))
