# Question 74

[Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)

## What I have used

- Linear Search

- Binary Search

- 2D Vectors

## Description

Easy

You are given an m x n integer matrix matrix with the following two properties:

- Each row is sorted in non-decreasing order.

- The first integer of each row is greater than the last integer of the previous row.

Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m \* n)) time complexity.

Example 1:

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3

Output: true

```

![Example 1](example_1.jpeg)

Example 2:

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13

Output: false

```

![Example 2](example_2.jpeg)

Constraints:

- m == matrix.length

- n == matrix[i].length

- 1 <= m, n <= 100

- 10^4 <= matrix[i][j], target <= 10^4

# Source of solutions

Version 1 : [myself, using C++](74_trial01.cpp)

- both linear search and binary search approaches are included

* linear approach means searching every elements in the matrix, this will cause O(m \* n)

* binary search approach means consider the matrix as long linear matrix with combining the columns into rows

  - then use the normal binary search approach to chop off unrelated items

  - this can save time for the unrelated items, with O(log m \* log n)
