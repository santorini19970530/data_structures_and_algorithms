# Question 344

[Reverse String](https://leetcode.com/problems/reverse-string/)

## What I have used

- Vector (transverse through)

## Description

Write a function that reverses a string.

The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

```
Input: s = ["h","e","l","l","o"]

Output: ["o","l","l","e","h"]

```

Example 2:

```
Input: s = ["H","a","n","n","a","h"]

Output: ["h","a","n","n","a","H"]

```

Constraints:

- 1 <= s.length <= 10^5

- s[i] is a printable ascii character.

# Source of solutions

Version 1 : [myself, using C++ pointer](344_trial01.cpp)

- since this problem requires space complexity O(1), stack (need one more array to store) is not possible.

Version 2: use reverse()

[C++'s reverse](https://en.cppreference.com/w/cpp/algorithm/reverse)
