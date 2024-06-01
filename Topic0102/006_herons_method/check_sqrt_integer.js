var x = 2;

console.log(`square root of ${x} is integer : ${isXInteger(x)}.`);

function isXInteger(n) {
  y = false;

  for (let i = 1; i <= n; i++) if (i * i == n) y = true;

  return y;
}
