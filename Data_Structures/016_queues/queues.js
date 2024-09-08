class Queue {
  // private
  #queue = [];

  constructor() {}

  getLength = () => {
    return this.#queue.length;
  };

  isEmpty = () => {
    return this.#queue.length == 0 ? true : false;
  };

  head = () => {
    return !this.isEmpty()
      ? this.#queue[this.getLength() - 1]
      : "The queue is empty.";
  };

  enqueue = (num) => {
    this.#queue.unshift(num);
  };

  dequeue = () => {
    if (!this.isEmpty()) this.#queue.pop();
    else console.log("the queue is empty, nothing to remove.");
  };
}

/* example in video */
var que = new Queue();

// new born queue
console.log(`The queue's length : ${que.getLength()}`);

console.log(`The queue is empty: ${que.isEmpty()}`);

console.log(`The queue's head : ${que.head()}`);

// start adding elements into the queue

console.log("------\nAdding 1 into the queue :");

que.enqueue(1);

console.log(`The queue's length : ${que.getLength()}`);

console.log(`The queue is empty: ${que.isEmpty()}`);

console.log(`The queue's head : ${que.head()}`);

console.log("------\nAdding 2 into the queue :");

que.enqueue(2);

console.log(`The queue's length : ${que.getLength()}`);

console.log(`The queue is empty: ${que.isEmpty()}`);

console.log(`The queue's head : ${que.head()}`);

// remove one element

console.log("------\nRemoving one element into the queue :");

que.dequeue();

console.log(`The queue's length : ${que.getLength()}`);

console.log(`The queue is empty: ${que.isEmpty()}`);

console.log(`The queue's head : ${que.head()}`);

// ENQUEUE[1, q]

console.log("------\nAdding once more 1 into the queue :");

que.enqueue(1);

console.log(`The queue's length : ${que.getLength()}`);

console.log(`The queue is empty: ${que.isEmpty()}`);

console.log(`The queue's head : ${que.head()}`);

// x = HEAD[q]

var obj = { x: que.head() };

console.table(obj);

/*
/* review question 7 
*/

console.log("\n----------------------\n");
// new Queue q
var que2 = new Queue();

// ENQUEUE[1, q]
que2.enqueue(1);

console.log(`The queue's length : ${que2.getLength()}`);

console.log(`The queue is empty: ${que2.isEmpty()}`);

console.log(`The queue's head : ${que2.head()}`);

/* for 1 <= i <= 5 do
 *  ENQUEUE(i x HEAD[q])
 *  DEQUEUE[q]
 *  end for
 */

for (let i = 0; i < 5; i++) {
  que2.enqueue((i + 1) * que2.head());
  que2.dequeue();
}

console.log("------\nAdding elements into the queue :");

console.log(`The queue's length : ${que2.getLength()}`);

console.log(`The queue is empty: ${que2.isEmpty()}`);

console.log(`The queue's head : ${que2.head()}`);

// x = HEAD[q]

obj = { x: que2.head() };

console.table(obj);

/*
/* review question 9 
*/

console.log("\n----------------------\n");

/* function qFunc(n)
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
 */

const qFunc = (n) => {
  let que = new Queue();

  for (let i = 0; i < n; i++) que.enqueue((i + 1) % 2);

  let x = 0;

  while (!que.isEmpty()) {
    x += que.head();
    que.dequeue();
  }

  return x;
};

// qFunc(5)
console.log(qFunc(5));
