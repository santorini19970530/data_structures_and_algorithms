# video example
x = 1
y = 0

while x < 11:
    y += x
    x += 1

print(f'{x} and {y}.')

# review question 5

a = 1
i = 0

while i < 4:
    a *= 2
    i += 1

print(a)

# review question 6
# this will cause infinity loop
'''
b = 1
c = 0

while c > 0:
    b += c
    c += 1

print(b)
'''
