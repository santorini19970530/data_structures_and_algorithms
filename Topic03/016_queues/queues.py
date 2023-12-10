class Queue:
    def __init__(self):
        # private
        self.__q = []

    def getLength(self):
        return len(self.__q)

    def head(self):
        if not(self.isEmpty()):
            return self.__q[-1]
        return "nothing in the queue"

    def isEmpty(self):
        return self.getLength() == 0

    def enqueue(self, num):
        self.__q.insert(0, num);

    def dequeue(self):
        if not(self.isEmpty()):
            self.__q.pop(-1)
        else:
            return "nothin in the queue"

# example in video

# new Queue que
que = Queue()

print("Setting up a empty queue : ")
print(f'Length of queue : {que.getLength()}')
print(f'the queue is empty : {que.isEmpty()}')
print(f'Head of queue : {que.head()}')

# ENQUEUE[1, q]
print("---\nAdd \'1\' into the queue : ")
que.enqueue(1)
print(f'Length of queue : {que.getLength()}')
print(f'the queue is empty : {que.isEmpty()}')
print(f'Head of queue : {que.head()}')

# ENQUEUE[2, q]
print("---\nAdd \'2\' into the queue : ")
que.enqueue(2)
print(f'Length of queue : {que.getLength()}')
print(f'the queue is empty : {que.isEmpty()}')
print(f'Head of queue : {que.head()}')

# DEQUEUE[q]
print("---\nRemove one item from the queue : ")
que.dequeue()
print(f'Length of queue : {que.getLength()}')
print(f'the queue is empty : {que.isEmpty()}')
print(f'Head of queue : {que.head()}')

# ENQUEUE[1, q]
print("---\nAdd \'1\' into the queue : ")
que.enqueue(1)
print(f'Length of queue : {que.getLength()}')
print(f'the queue is empty : {que.isEmpty()}')
print(f'Head of queue : {que.head()}')

# x = HEAD[q]
x = que.head()
print(f'---\nx : {x}')

# review question 7

'''
new Queue q
ENQUEUE[1, q]

for 1 <= i <= 5 do
  ENQUEUE(i x HEAD[q])
  DEQUEUE[q]
end for

x = HEAD[q]
'''
que2 = Queue()

que2.enqueue(1)

for i in range(5):
    que2.enqueue((i+1) * que2.head())
    que2.dequeue()

x = que2.head()
print(f'---\nx : {x}')

# review question 9

'''
function qFunc(n)
  for 1 <= i <= n do
    ENQUEUE[i mod 2, q]
  end for

  x = 0

  while EMPTY[q] = FALSE do
    x = x + HEAD[q]
    DEQUEUE[q]
  end while

  return x
end function
'''
def qFunc(n):
    que = Queue()
    
    for i in range(n):
        que.enqueue((i+1) % 2)

    x = 0

    while not que.isEmpty():
        x += que.head()
        que.dequeue();

    return x

# qFunc(5)

print(f'---\nqFunc(5) : {qFunc(5)}')
