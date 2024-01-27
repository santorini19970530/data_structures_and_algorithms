// generate one birthday randomally
function genDay() {
  //first generate a month
  let month = 1 + Math.round(11 * Math.random());
  let day;

  // generate days in the month
  if ((month % 2 == 1 && month <= 7) || (month % 2 == 0 && month >= 8))
    day = 1 + Math.round(30 * Math.random());
  else if (month == 2) day = 1 + Math.round(27 * Math.random());
  else day = 1 + Math.round(29 * Math.random());

  return [day, month];
}

// generate the people (array of person) randomally
function genBirthdays(n) {
  let birthdays = [];
  let nst = n.toString();

  for (let i = 0; i < n; i++) {
    // generate the ID of one person
    let str = i.toString();
    let lim = nst.length - str.length;
    for (let j = 1; j <= lim; j++) str = "0" + str;

    // generate the birthday of that person
    birthdays[2 * i] = str;

    // combine together to complete one person
    birthdays[1 + 2 * i] = genDay();
  }

  return birthdays;
}

// compare if the birthdays are equal or not
function isBirthdayEqual(day1, day2) {
  return day1[0] == day2[0] && day1[1] == day2[1];
}

// search for unique birthdays in the people array
// using linear search
function find(birthdays) {
  let n = birthdays.length;
  let result = [];

  for (let current = 1; current < n; current += 2) {
    let count = 0;

    for (let i = 1; i < n; i += 2)
      if (current != i)
        if (isBirthdayEqual(birthdays[current], birthdays[i])) ++count;

    if (count == 0) result.push(birthdays[current - 1]);
  }

  return result;
}

///////////////////////////////////////////

// swaps membership numbers and birthdays given two indices
function swap(array, index1, index2) {
  let x1 = array[index2];
  let x2 = array[index2 - 1];

  array[index2] = array[index1];
  array[index1] = x1;

  array[index2 - 1] = array[index1 - 1];
  array[index1 - 1] = x2;

  return array;
}

// bubble sort the people array, in terms of month
function bubbleSort(array) {
  let n = array.length;

  for (let i = 0; i <= n - 2; i++) {
    let count = 0;

    for (let j = 1; j <= n - 3; j = j + 2)
      if (array[j + 2][1] < array[j][1]) {
        swap(array, j, j + 2);
        count++;
      }

    if (count == 0) break;
  }

  return array;
}

// bubble sort the people array based on the same month, sort by day
function bubbleSortDays(array) {
  let n = array.length;

  for (let i = 0; i <= n - 2; i++) {
    let count = 0;

    for (let j = 1; j <= n - 3; j = j + 2)
      if (array[j + 2][1] == array[j][1] && array[j + 2][0] < array[j][0]) {
        swap(array, j, j + 2);
        count++;
      }

    if (count == 0) break;
  }

  return array;
}

// sort then search for unique birthdays
// then match if the left or the right birthdays are not the same, i.e. sole birthdsy
function findSorted(birthdays) {
  bubbleSortDays(bubbleSort(birthdays));
  let n = birthdays.length;
  let result = [];

  for (let current = 1; current < n; current += 2) {
    switch (current) {
      case 1:
        if (isBirthdayEqual(birthdays[current], birthdays[current + 2]))
          continue;
        else result.push(birthdays[current - 1]);
        break;
      case n - 1:
        if (isBirthdayEqual(birthdays[current], birthdays[current - 2]))
          continue;
        else result.push(birthdays[current - 1]);
        break;
      default:
        if (
          isBirthdayEqual(birthdays[current], birthdays[current - 2]) ||
          isBirthdayEqual(birthdays[current], birthdays[current + 2])
        )
          continue;
        else result.push(birthdays[current - 1]);
        break;
    }
  }

  return result;
}

///////////////////////////////////////////
//this creates an array for testing
//in this array the only unique birthday is held by member "1"
/*var birthdays = [
  "0",
  [22, 8],
  "1",
  [11, 4],
  "2",
  [16, 10],
  "3",
  [22, 8],
  "4",
  [16, 10],
];
console.log(find(birthdays));
console.log(findSorted(birthdays));*/
//in both cases the array printed to the console should be ["1"]

//if you are feeling confident you can uncomment the following lines of code to test a larger example
var birthdays = genBirthdays(1589);
console.log(find(birthdays));
console.log(findSorted(birthdays));

// Do not modify the code below this point--------------------------------
module.exports = {
  genDay: genDay,
  genBirthdays: genBirthdays,
  find: find,
  swap: swap,
  bubbleSort: bubbleSort,
  bubbleSortDays: bubbleSortDays,
  findSorted: findSorted,
};
