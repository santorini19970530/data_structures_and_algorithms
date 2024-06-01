x = 1
y = 0

for i in range(11):
    y += x
    x += 1
    break

print(x)

n = 2
for i in range(2):
    n *= 2
    continue

print(n)
