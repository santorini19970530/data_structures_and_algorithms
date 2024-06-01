# Vector is fixed space array
# but vector in python is not fixed in size, hence need a class to constrain the actions


class Vector:
    def __init__(self, length):
        self.vec = [None] * length

    def getLength(self):
        return len(self.vec)

    def store (self, pos, num):
        if pos < self.getLength():
            self.vec[pos] = num;

    def select(self, pos):
        return self.vec[pos]

#---------------------
# example in video

# new Vector w(4)
v = Vector(4)

'''
for 1 <= i <= 4 do
    w[i] = i
end for
'''
for i in range(4):
    v.store(i, i + 1)

print(f'length of vector : {v.getLength()}')

# x = w[3]
print(f'x : {v.select(2)}')

#---------------------
# review question 6

# new Vector w(4)
w = Vector(4)

# w[1] = 2
w.store(0, 2)

'''
for 1 < i <= 4 do
  w[i] = i x w[i-1]
end for
'''
for i in range(1, 5):
    w.store(i, (i+1) * w.select(i - 1))

# x = w[4]
print(f'x : {w.select(3)}')
