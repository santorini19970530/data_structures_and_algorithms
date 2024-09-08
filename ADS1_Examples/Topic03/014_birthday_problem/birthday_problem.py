m= [2, 3, 1]

i = 0
j = 0
k = 0
total = i + j + k

for i in range(m[0] + 1):
    for j in range(m[1] + 1):
        for k in range(m[2] + 1):
            if i + 2 * j + 3 * k == 6:
                if i + j + k > total:
                    total = i + j + k
                    print(f'i : {i}\nj : {j}\nk : {k}\n result : {total}')
                else:
                    print(f'i : {i}\nj : {j}\nk : {k}\n result : not greater than last process')

                    
