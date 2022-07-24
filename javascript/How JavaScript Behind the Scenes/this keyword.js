console.log(this);

function sayHellO() {
  console.log("Hello");
  // console.log(this);
}
sayHellO();

var john = {
  name: "John",
  yeaOfBirth: 1990,
  calculateAge: function() {
    console.log(this);
    console.log(this.yeaOfBirth);
    
    // function innerFunction() {
    //   console.log(this); // here this refers to the global object
    // }
    // innerFunction();
  }
};
john.calculateAge();

var mike = {
  name: "Mike",
  yeaOfBirth: 1984
};

// Method Borrowing
mike.calculateAge = john.calculateAge
mike.calculateAge();