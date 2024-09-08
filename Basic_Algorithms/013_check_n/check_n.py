def checkN(n):
    i = 2
    
    while(i < n):
        if n % i == 0:
            return True
        i += 1
    return False

for i in range(3, 20):
    print(f'{i} is not prime : {checkN(i)}.')
