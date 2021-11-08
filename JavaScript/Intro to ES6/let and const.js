// ES5 (var - Function Scoped)
var name5 = "Jane Smith";
var age5 = 23;
name5 = "Jane Miller"
console.log(name5);

// ES6 (const, let - Block Scoped) 
const name6 = "Jane Smith"; // Immutable
let age6 = 23; // Mutable
console.log(name6);

// ES5
function driversLicense5(passedTest) {
  if (passedTest) {
    console.log(firstName);
    var firstName = "John";
    var yearOfBirth = 1990;
  }
  
  console.log(firstName + ", born in " + yearOfBirth + ", is now officially allowed to drive a car.");
}
driversLicense5(true);

// ES6
function driversLicense6(passedTest) {
  let firstName, yearOfBirth;
  if (passedTest) {
    // let firstName = "John"; // won't work
    // let yearOfBirth = 1990;

    firstName = "John";
    yearOfBirth = 1990;
  }
  
  console.log(firstName + ", born in " + yearOfBirth + ", is now officially allowed to drive a car.");
}
driversLicense6(true);


// ES5
var j = 23;
for (var j = 0; j < 5; j++) {
  console.log("j: " + j);
}
console.log("j: " + j); // j will be overriden as 5


// ES6
let i = 23;
for (let i = 0; i < 5; i++) {
  console.log("i: " + i);
}
console.log("i: " + i); // i will be 23;