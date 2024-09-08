// vector is fixed-size array
// as JavaScript array is resizeable, need a function constructor to limit actios of array

class Vector {
  // private
  #vec = [];

  // public
  constructor(length) {
    this.#vec = new Array(length);
  }

  getLength = function () {
    return this.#vec.length;
  };

  store = function (pos, val) {
    if (pos < 4) this.#vec[pos] = val;
  };

  select = function (pos) {
    return this.#vec[pos];
  };
}

/* example in video */
const v = new Vector(4);

// store values into vector
for (let i = 0; i < v.getLength(); i++) v.store(i, i + 1);
// get length of the vector
console.log(v.getLength());
// get values from the vector
for (let i = 0; i < v.getLength(); i++) console.log(v.select(i));

/* review question 6 */
const w = new Vector(4);

w.store(0, 2);

for (let i = 1; i < w.getLength(); i++) w.store(i, (i + 1) * w.select(i - 1));

console.table({ x: w.select(3) });
