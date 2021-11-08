class Person {
	constructor(firstName, lastName, age, country, city = "xyz") {
		this.firstName = firstName;
		this.lastName = lastName;
		this.age = age;
		this.country = country;
		this.city = city;
    this.score = 0;
	}

  getFullName() {
    const fullName = this.firstName + " " + this.lastName;
    return fullName;
  }
  
  get getScore() { return this.score; }
  set setScore(newScore) { this.score = newScore; }
  
  // Similar to the static methods of other languages
  static favoriteSkill() {
    const skills = ['HTML', 'CSS', 'JS', 'React', 'Python', 'Node']
    const index = Math.floor(Math.random() * skills.length)
    return skills[index]
  }
}

// const person = new Person();
// console.log(person);
const person2 = new Person("Muhesh", "Kumar", 19, "India", "abc");
console.log(person2);

const person3 = new Person("Muhesh", "Kumar", 19, "India");
console.log(person3);
console.log(person3.getFullName());
console.log(person3.getScore); // we dont need parenthesis to call getters
person3.setScore = 4;
console.log(person3.getScore);
console.log(Person.favoriteSkill());

class Student extends Person {
  constructor(firstName, lastName, age, country, city, gender = "Male") {
    super(firstName, lastName, age, country, city);
    this.gender = gender;
  }

  saySomething() {
    console.log('This is a child of the person class');
  }
}

const s1 = new Student("Muhesh", "Kumar", 19, "India");
console.log(s1);