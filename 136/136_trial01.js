/**
 * @param {number[]} nums
 * @return {number}
 */

/* method 1 - brute force array transition */

/* runtimte 930 ms 5.2% of candidates
   84.7 mb 5.31% of candidates */

var singleNumber = function (nums) {
  let result;
  let storage = [];

  nums.forEach((num) => {
    storage[num - 1] = !storage[num - 1];
  });

  for (let i = -30000; i < 30000 - 1; i++)
    if (storage[i]) {
      result = i + 1;
      break;
    }

  return result;
};
