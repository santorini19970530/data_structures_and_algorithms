def isEven(n):
    if n % 2 == 0:
        return True
    return False

def sec(n):
    y = 2
    for i in range(1, n+1):
        if isEven(i):
            y += i
    return y

x = 3

print(f'{x} : {sec(x)}')
