x = 2

def isXInteger(n):
    y = False
    for i in range(1, n+1):
        if i * i == n:
            y = True
    return y

print(f'{x}\'s square root is integer: {isXInteger(x)}')
