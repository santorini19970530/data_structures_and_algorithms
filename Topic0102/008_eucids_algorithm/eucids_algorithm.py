x = 10
y = 30

def gcd(a, b):
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    return a

print(f'gcd of {x} and {y} is {gcd(x,y)}.')
