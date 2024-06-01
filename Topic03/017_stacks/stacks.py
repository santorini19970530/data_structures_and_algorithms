class Stack:
    def __init__(self):
        # private
        self.__s = []

    def push(self, num):
        self.__s.append(num)

    def pop(self):
        if len(self.__s) == 0:
            return "the stack is empty"
        else:
            self.__s.pop()

    def isEmpty(self):
        if len(self.__s) == 0:
            return True
        else:
            return False

    def top(self):
        if self.isEmpty():
            return "the stack is empty"
        else:
            return self.__s[-1]

    def printSelf(self):
        print(self.__s)

# video example 1

stk1 = Stack()

stk1.push(2)
stk1.push(4)
stk1.pop()
stk1.pop()

x = stk1.top()

print(f'x : {x}')

# video example 2

stk2 = Stack()

stk2.push(2)

for i in range(3, 10):
    stk2.pop()
    stk2.push(i)

x = stk2.top()

print(f'x : {x}')

# review question 8

stk3 = Stack()

stk3.push(1)

for i in range(4):
    stk3.push(i + 1)

x = 1;

while not stk3.isEmpty():
    x += stk3.top()
    stk3.pop()

print(f'x : {x}')

# review question 10

def thing(n):
    if n < 3:
        return 1
    
    stk = Stack()

    stk.push(1)
    stk.push(1)

    for i in range (2, n):
        x = stk.top()
        stk.pop()

        y = stk.top()

        stk.push(x)
        stk.push(x + y)

    return stk.top()

print(f'thing(8) : {thing(8)}')
