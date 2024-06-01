# Question

136. Single Number

Easy

Given a non-empty array of integers `nums`, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:

    Input: nums = [2,2,1]
    Output: 1

Example 2:

    Input: nums = [4,1,2,1,2]
    Output: 4

Example 3:

    Input: nums = [1]
    Output: 1

Constraints:

- 1 <= nums.length <= 3 \* $10^4$

- -3 \* $10^4$ <= nums[i] <= 3 \* $10^4$

- Each element in the array appears twice except for one element which appears only once.

# Source of solutions

Version 1 : myself

Version 2 : Pyhton

[Neetcode](https://www.youtube.com/watch?v=qMPX1AOa83k)

- no hashmap is allowed (constant space)

- binary XOR will be used

|  X  |  Y  | X XOR Y |
| :-: | :-: | :-----: |
|  0  |  0  |    0    |
|  0  |  1  |    1    |
|  1  |  0  |    1    |
|  1  |  1  |    0    |

[2, 2, 1] => [010. 010. 001] => the first two binaries will eliminate each other (becomes all zero).

Java

[Nikhil Lohia](https://www.youtube.com/watch?v=KNOw_goVGas)

Version 3 : [DataDraft](https://www.youtube.com/watch?v=d9yH_X0p7mI)
