const checkN = (n) => {
  let i = 2;

  while (i < n) {
    if (n % i == 0) return true;
    i++;
  }
  return false;
};

for (let i = 3; i < 20; i++) console.log(`${i} is not prime : ${checkN(i)}`);
