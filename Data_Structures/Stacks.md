# Stacks

## Appearances

- ADS1 topic 3

## Description

- there is only one element accessible - top of the stack

- we can only add or remove elements from the top of the stack

- last in first out access

| Operation                   | Pseudocode    |
| :-------------------------- | :------------ |
| push![o]                    | `PUSH[o, s]`  |
| top                         | `TOP[s]`      |
| pop!                        | `POP[s]`      |
| empty?                      | `EMPTY[s]`    |
| construct new (empty) stack | `new Stack s` |

- top - return the top element of the stack

- pop - returns the top element of the stack and remove the top

- another approach : changing the integer into binary digit, store as stack and check if the top is 1 or not

* length is not essential (wiki)

  - In many implementations, a stack has more operations than the essential "push" and "pop" operations.

  - An example of a non-essential operation is "top of stack", or "peek", which observes the top element without removing it from the stack.

  - This could be done with a "pop" followed by a "push" to return the same data to the stack, so it is not considered an essential operation.

  - If the stack is empty, an underflow condition will occur upon execution of either the "stack top" or "pop" operations.

  - Additionally, many implementations provide a check if the stack is empty and one that returns its size.

## Implementation Examples

- [Java](Stacks/stacks.java)

- [JavaScript](Stacks/stacks.js)

- [Python](Stacks/stacks.py)

- [C++ STL](Stacks/stacks_stl.cpp)

Video example 1

```
new Stack s

PUSH[2, s]
PUSH[4, s]
POP[s]
POP[s]

x = TOP[s]
x = EMPTY[s]

// finally, x is true

```

Video example 2

```
new Stack s

PUSH[2, s]

for 3 <= i < 10 do
  POP[s]
  PUSH[i, s]
end for

x = TOP[s]

// finally, x is 9

```

Review Question 8

```
new Stack s
PUSH[1, s]

for 1 <= i <= 4 do
  PUSH[i, s]
end for

x = 1

while EMPTY[s] = FALSE do
  x = x + TOP[s]
  POP[s]
end while

```

Review Question 10

```

funciton Thing(n)
  if n < 3 then
    return 1
  end if

  new Stack s

  PUSH[1, s]
  PUSH[1, s]

  for 3 <= i <= n do
    x = TOP[s]
    POP[s]
    y = TOP[s]
    PUSH[x, s]
    PUSH[x + y, s]
  end for

  return TOP[s]
end function

```

Checking if an integer is even

- original version

```
function EVEN(n)
  if n mod 2 = 0
    return TRUE
  else
    return FALSE
  end if
end function

```

- binary integer version

  - Given integer n in decimal form, give a binary representation as a stack

  - the last binary digit determines if the integer is even or not

```
function BinaryStack(n)
  a = n

  new Stack x

  while floor(a / 2) != 0 do
    PUSH[a mod 2, x]
    a = floor(a / 2)
  end while

  PUSH[a mod 2, x]
  return x
end function

// if n = 561, x = [1, 0, 0, 0, 1, 1, 0, 0 ,0, 1]
// the last 1 is top, which determines whether the decimal is even or not

```

- Leetcode questions

| Number |                                        Question Link                                        |                  Solution                   |
| :----: | :-----------------------------------------------------------------------------------------: | :-----------------------------------------: |
|  225   | [Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/) | [Solution](../leetcode/225/225_question.md) |
