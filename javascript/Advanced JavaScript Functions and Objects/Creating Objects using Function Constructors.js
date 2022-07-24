var john = {
  name: "John",
  yearOfBirth: 1990,
  job: "teacher"
};

// Function Constructor
var Person = function(name, yearOfBirth, job) { // use PascalCase to name function constructors
  this.name = name;
  this.yearOfBirth = yearOfBirth;
  this.job = job;
};

// Inheritance
Person.prototype.calculateAge = function () {
  console.log(2021 - this.yearOfBirth);
}
Person.prototype.lastName = "Smith";

var john1 = new Person("John", 1990, "teacher");
john1.calculateAge();

var jane = new Person("Jane", 1969, "designer");
var mark = new Person("Mark", 1948, "retired");
jane.calculateAge();
mark.calculateAge();
console.log(john1.lastName);
console.log(jane.lastName);
console.log(mark.lastName);
console.log("hello");