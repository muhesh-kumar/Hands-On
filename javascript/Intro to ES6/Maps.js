// JavaScript Implementation of HashMaps

const question = new Map();
question.set("question", "What is the official name of the latest major JavaScript version?");
question.set(1, "ES5");
question.set(2, "ES6");
question.set(3, "ES2015");
question.set(4, "ES7");
question.set("correct", 3);
question.set(true, "Correct answer:D");
question.set(false, "Wrong, please try again!");
console.log(question);

console.log(question.get("question"));
console.log(question.size);

if (question.has(4)) {
  question.delete(4);
  console.log("Answer 4 is here");
}
console.log(question);
question.delete(4);
console.log(question);
// question.clear();
// console.log(question);

// Traversing a map
question.forEach((value, key) => console.log(`This is ${key}, and it's set to ${value}`));

for (const key of question) {
  console.log(key);
}
console.log("-------------");
for (const [key, value] of question.entries()) {
  console.log(key, value);
}