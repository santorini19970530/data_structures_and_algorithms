var x = 1,
  y = 0;

for (let i = x; i < 11; i++) {
  y += x;
  x += i;
  break;
}

console.log(x);

var n = 2;

for (let i = 0; i < 2; i++) {
  n *= 2;
  continue;
}

console.log(n);
