/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */

// redo

/* runtimte 52 ms 59.13% of candidates
   49 mb 48.77% of candidates */

var searchInsert = function (nums, target) {
  let left = 0;
  let right = nums.length;
  let mid = 0;

  while (left < right) {
    mid = left + Math.floor((right - left) / 2);

    if (nums[mid] == target) return mid;
    else if (nums[mid] > target) right = mid;
    else left = mid + 1;
  }

  return left;
};

var array1 = [1, 3, 5, 6];

var target1 = 5;
console.log(target1 + " is in position " + searchInsert(array1, target1));

var target2 = 2;
console.log(target2 + " is in position " + searchInsert(array1, target2));

var target3 = 7;
console.log(target3 + " is in position " + searchInsert(array1, target3));

var target4 = 0;
console.log(target4 + " is in position " + searchInsert(array1, target4));
