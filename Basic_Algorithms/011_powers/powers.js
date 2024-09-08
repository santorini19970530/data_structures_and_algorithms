const powers = (n) => {
  let y = 0;

  while (Math.pow(2, y) <= n) {
    if (Math.pow(2, y) == n) return y;
    y++;
  }
  return false;
};

var x = 3;
console.log(`${x} : ${powers(3)}`);
