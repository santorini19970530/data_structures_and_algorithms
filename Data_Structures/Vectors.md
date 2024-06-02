# Vectors

## Appearances

- ADS1 topic 3

## Description

- Vector is a fixed-length array

* finite fixed size sequential data collection (ordered set)

* it is finite, it has a non-negative integer number of elements / empty

* fixed size, so the number of elements it has are fixed and cannot be altered (immutable)

* length : number of elements of vector

## PseudoCode

| Operation                               | Pseudocode                      |
| :-------------------------------------- | :------------------------------ |
| length                                  | `LENGTH[v]`                     |
| select[k]                               | `v[k]`                          |
| store![o, k]                            | `v[k] = o`                      |
| delete![k]                              | Not available : length is fixed |
| add![0]                                 | Not available : length is fixed |
| construct new(blank) vector of length n | `new Vector w(n)`               |

- save![o] and listall are not operations

* The definition of vector being used here is very different from the terminology of vector used in C++.

  - The vector abstract data structure is independent of programming language and has a fixed number of elements.

  * The vector in C++ is part of a programming language and is different

## Code Examples

- [C++](Vector/vectors.cpp)

- [Java](Vector/vectors.java)

- [JavaScript](Vector/vectors.js)

- [Python](Vector/vectors.py)

```
Examples in lecture videos

new Vector w(4)

for 1 <= i <= 4 do
  w[i] = i
end for

x = w[3]

// finally x will be 3.

Review question 6

new Vector w(4)
w[1] = 2

for 1 < i <= 4 do
  w[i] = i x w[i-1]
end for

x = w[4]

```

- Leetcode questions - TBD
