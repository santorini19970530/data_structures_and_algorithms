# Question 771

[Jewels and Stones](https://leetcode.com/problems/jewels-and-stones/)

## What I have used

- Lined List

## Description

Easy

You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:

    Input: jewels = "aA", stones = "aAAbbbb"
    Output: 3

Example 2:

    Input: jewels = "z", stones = "ZZ"
    Output: 0

Constraints:

- `1 <= jewels.length`, `stones.length <= 50`

- jewels and stones consist of only English letters.

- All the characters of jewels are unique.

# Source of solutions

Version 1 : [myself, Linked list implementation by JavaScript](771_trial01.js)

Version 2 : [Brute force loop by C++](771_trial02.cpp)

[Source](https://leetcode.com/problems/jewels-and-stones/discuss/1158207/771-jewels-and-stones-100-faster-c/)
