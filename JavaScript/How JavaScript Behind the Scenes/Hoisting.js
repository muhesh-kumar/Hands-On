
// HOISTING

// Function Declarations
add(1, 2); // => Because of Hoisting in JS, we can call functions even before declaring them in our code

function add(a, b) {
  console.log(a + b);
}

add(2, 3);

// Function Expressions
// prod(1, 2); // But, the same doesn't happen in function expressions

var prod =  function(a, b) {
  console.log(a * b);
}

prod(1, 2);

// Variables

console.log("Age: " + age);
var age = 11
console.log("Age: " + age);

function foo() {
  console.log("Age: " + age);
  var age = 12;
  console.log("Age: " + age);
}

foo();
console.log("Age: " + age);
