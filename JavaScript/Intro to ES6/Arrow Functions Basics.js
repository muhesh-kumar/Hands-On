const years = [1990, 1965, 1982, 1937];

// ES5
var ages5 = years.map(function(el) {
  return 2021 - el;
});
console.log(ages5);

// ES6 
let ages6 = years.map((el) => 2021 - el);
console.log(ages6);

ages6 = years.map((el, idx) => `Age element ${idx + 1}: ${2021 - el}`);
console.log(ages6);

ages6 = years.map((el, idx) => {
  const now = new Date().getFullYear();
  const age = now - el;
  return `Age element ${idx + 1}: ${age}`;
});
console.log(ages6);

// Arrow functions shares the lexical this keyword of its surroundings

// ES5
var obj5 = {
  firstName: "John",
  lastName: "Smith",
  printFullName: function() {
    var self = this; // one solution is to store the value of 'this' keyword outside the callback and use it inside the callback
    setTimeout(function() {
      console.log(this.firstName + " " + this.lastName);
      console.log(self.firstName + " " + self.lastName);
      // properties of obj5 won't be accessible from this function using the 'this' keyword
    }, 2000);
  }
};
obj5.printFullName();

// ES6
var obj6 = {
  firstName: "John",
  lastName: "Smith",
  printFullName: function() {
    setTimeout(() => {
      console.log(this.firstName + " " + this.lastName);
    }, 2000);
  }
};
obj6.printFullName();

var obj66 = {
  firstName: "John",
  lastName: "Smith",
  printFullName: () => {
    setTimeout(() => {
      console.log(this.firstName + " " + this.lastName);
    }, 2000);
  }
};
obj66.printFullName();
