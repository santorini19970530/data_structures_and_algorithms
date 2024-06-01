var x = 3;

const isEven = (n) => {
  return n % 2 == 0 ? true : false;
};

const sec = (n) => {
  y = 2;

  for (let i = 1; i <= n; i++) if (isEven(i)) y += i;
  return y;
};

console.log(`${x} : ${sec(x)}`);
