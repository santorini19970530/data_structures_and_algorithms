// trial 01
// 136 ms, beat 31.54% of candidate
// 97.61 mb, beat 5.12% of candidate

/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} low
 * @param {number} high
 * @return {number}
 */
var rangeSumBST = function (root, low, high) {
  let result = 0;

  if (!root) return 0;

  if (root.val < low) return rangeSumBST(root.right, low, high);
  if (root.val > high) return rangeSumBST(root.left, low, high);

  result +=
    root.val +
    rangeSumBST(root.left, low, high) +
    rangeSumBST(root.right, low, high);

  return result;
};
