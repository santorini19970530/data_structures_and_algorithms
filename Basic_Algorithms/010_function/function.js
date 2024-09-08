myFunction = (m) => {
  let x = Math.floor(m / 2);

  for (let i = 0; i < 10; i++) x += m + i;

  return x;
};

console.log(myFunction(5));
