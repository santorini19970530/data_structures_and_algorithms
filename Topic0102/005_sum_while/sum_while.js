// video example
var x = 1,
  y = 0;

while (x < 11) {
  y += x;
  x += 1;
}

console.log(x + " and " + y);

// review question 5
var a = 1,
  i = 0;

while (i < 4) {
  a *= 2;
  i++;
}

console.log(a);

// review question 6
// this will cause infinity loop
//
/*
int c = 1, d = 0;

while(c > 0){
  d += c;
  c++;
}
*/
