function addFourAges(a, b, c, d) {
  return a + b + c + d;
}

var sum1 = addFourAges(18, 30, 12, 21);
console.log(sum1);

// ES5
var ages = [18, 30, 12, 23];
var sum2 = addFourAges.apply(null, ages);
console.log(sum2);

// ES6 (spread operator can be used on any iterable)
const max3 = addFourAges(...ages); // exactly same as writing addFourAges(18, 30, 12, 23);
console.log(max3);

const familySmith = ["John", "Jane", "Mark"];
const familyMiller = ["Mary", "Bob", "Ann"];
const bigFamily = [...familySmith, ...familyMiller];
console.log(bigFamily);
const bigFamily2= [...familySmith, "Lily", ...familyMiller];
console.log(bigFamily2);