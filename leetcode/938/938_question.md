# Question 938

[Range Sum of BST](https://leetcode.com/problems/range-sum-of-bst/)

Easy

Given the root node of a binary search tree and two integers low and high, return the sum of values of all nodes with a value in the inclusive range [low, high].

Example 1:

![Example 1](./938-1.jpeg)

    Input: root = [10,5,15,3,7,null,18], low = 7, high = 15
    Output: 32
    Explanation: Nodes 7, 10, and 15 are in the range [7, 15]. 7 + 10 + 15 = 32

Example 2:

![Example 2](./938-2.jpeg)

    Input: root = [10,5,15,3,7,13,18,1,null,6], low = 6, high = 10
    Output: 23
    Explanation: Nodes 6, 7, and 10 are in the range [6, 10]. 6 + 7 + 10 = 23.

Constraints:

- The number of nodes in the tree is in the range [1, 2 * $10^4$].

- 1 <= Node.val <= $10^5$

- 1 <= low <= high <= $10^5$

- All Node.val are unique

# Source of solutions

trial 1 - [myself, JavaScript - recursion of left and right tree items, skip unwanted items](938_trial01.js)

trial 2 - [myself, JavaScript - recursion of left and right tree items, skip unwanted items, remove the result variable to save space](938_trial02.js)

[reference video](https://www.youtube.com/watch?v=uLVG45n4Sbg)
