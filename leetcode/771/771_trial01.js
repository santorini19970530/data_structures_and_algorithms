/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */

// leetcode 771
// trial 1 - add a linked list of jewel, let the stones match one by one
// runtime 71 ms, beat 12.47 of JavaScript candidates
// memory 42.06 mb, beat 71.25 of JavaScript candidates
var numJewelsInStones = function (jewels, stones) {
  // set up empty linked list
  let jewelList = null;
  let jewelString = jewels.split("");
  let counter = 0;

  // fill in the linked list
  jewelString.forEach((jewelChar) => {
    let new_element = { jewel: jewelChar, next: null };

    if (!jewelList) {
      jewelList = new_element;
    } else {
      let current = jewelList;

      while (current.next) current = current.next;
      current.next = new_element;
    }
  });

  // print the linked list
  for (let i = 0; i < stones.length; i++) {
    let current = jewelList;
    while (current) {
      if (current.jewel == stones.charAt(i)) counter++;
      current = current.next;
    }
  }

  return counter;
};
