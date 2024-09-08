class Stack {
  #stack = [];

  constructor() {}

  push = (num) => {
    this.#stack.push(num);
  };

  pop = () => {
    if (!this.isEmpty()) this.#stack.pop();
    else console.log("stack is empty");
  };

  isEmpty = () => {
    return this.#stack[0] == null;
  };

  top = () => {
    return !this.isEmpty() ? this.#stack[this.#stack.length - 1] : null;
  };
}

// example 1 from video

stk1 = new Stack();

stk1.push(2); // PUSH[2, s]
stk1.push(4); // PUSH[4, s]
stk1.pop(); // POP
stk1.pop(); // POP

// top

var x = stk1.top();

console.table({ x: x });

// example 2 from video

stk2 = new Stack();

stk2.push(2);

for (let i = 3; i < 10; i++) {
  stk2.pop();
  stk2.push(i);
}

x = stk2.top();

console.table({ x: x });

// review question 8

stk3 = new Stack();

stk3.push(1);

for (let i = 1; i <= 4; i++) stk3.push(i);

x = 1;

while (!stk3.isEmpty()) {
  x += stk3.top();
  stk3.pop();
}

console.table({ x: x });

// review question 10

const thing = (n) => {
  if (n < 3) return 1;

  stk = new Stack();

  stk.push(1);
  stk.push(1);

  for (let i = 2; i < n; i++) {
    let x = stk.top();
    stk.pop();

    let y = stk.top();

    stk.push(x);
    stk.push(x + y);
  }

  return stk.top();
};

console.table({ "thing(8)": thing(8) });
