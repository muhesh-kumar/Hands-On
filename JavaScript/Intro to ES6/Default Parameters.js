// ES5
function SmithPerson(firstName, yearOfBirth, lastName, nationality) {
  // Implementing default parameters
  lastName === undefined ? lastName = "Smith" : lastName = lastName;
  nationality === undefined ? nationality = "American" : nationality = nationality;
  
  this.firstName = firstName;
  this.lastName = lastName;
  this.yearOfBirth = yearOfBirth;
  this.nationality = nationality;
}
var john = new SmithPerson("John", 1990);

// ES6
function SmithPerson(firstName, yearOfBirth, lastName = "Smith", nationality = "American") {
  this.firstName = firstName;
  this.lastName = lastName;
  this.yearOfBirth = yearOfBirth;
  this.nationality = nationality;
}
const joe = new SmithPerson("Joe", 1991);

console.log(john);
console.log(joe);