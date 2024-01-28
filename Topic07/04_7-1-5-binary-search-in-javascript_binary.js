// randomaly generates items and insert into input array
function genRandomArray(n) {
  let arr = [];

  for (let i = 0; i < n; i++) arr[i] = Math.round(10 * Math.random());

  return arr;
}

// swap the elements of array, return the sorted array
function swap(array, index1, index2) {
  let saveElement = array[index1];
  array[index1] = array[index2];
  array[index2] = saveElement;
  return array;
}

// bubble sort of given array, return sorted array
function bubbleSort(array) {
  let n = array.length;

  for (let i = 1; i < n; i++) {
    let count = 0;

    for (let j = 0; j < n - 1; j++)
      if (array[j + 1] < array[j]) {
        count++;
        swap(array, j, j + 1);
      }

    if (count == 0) break;
  }

  return array;
}

// binary search of element from an sorted array
// return a Boolean: true if x is in array, and false otherwise
function binarySearch(array, x) {
  let n = array.length;
  let head = 0;
  let tail = n - 1;

  while (head <= tail) {
    let mid = Math.floor((tail + head) / 2);

    if (array[mid] == x) return true;
    else if (array[mid] > x) tail = mid - 1;
    else head = mid + 1;
  }

  return false;
}

var arr = genRandomArray(14);
console.log(bubbleSort(arr));
console.log(binarySearch(bubbleSort(arr), 7));

// Do not modify the code below this point--------------------------------
module.exports = {
  genRandomArray: genRandomArray,
  swap: swap,
  bubbleSort: bubbleSort,
  binarySearch: binarySearch,
};
