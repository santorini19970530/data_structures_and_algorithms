var x = 100,
  y = 20;

function gcd(a, b) {
  while (a != b) {
    if (a > b) a -= b;
    else b -= a;
  }
  return a;
}

console.log(`GCD of ${x} and ${y} is ${gcd(x, y)}.`);
