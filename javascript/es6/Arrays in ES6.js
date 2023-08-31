// const boxes = document.querySelector(".box");

// ES5
// var boxesArr5 = Array.prototype.slice.call(boxes);
// boxesArr5.forEach(function(el) {
//   el.style.backgroundColor = "dogerblue";
// });

// ES6
// const boxesArr6 = Array.from(boxes);
// boxesArr6.forEach(cur => cur.style.backgroundColor = "dogerblue");

// the problem with functions like forEach is that we cannot use jump statements in them

const boxesArr5 = [1, 2, 3, 4, 5];

// ES5
for (var i = 0; i < boxesArr5.length; i++) {
  if (boxesArr5[i] == 4) continue;
  console.log(boxesArr5[i]);
}

// ES6
for (const i of boxesArr5) {
  if (i == 4) continue;
  console.log(i);
}

// ES5
var ages = [12, 7, 8, 21, 14, 11];
var full = ages.map(function (el) {
  return el >= 18;
});
console.log(full);
console.log(full.indexOf(true));
console.log(ages[full.indexOf(true)]);

// ES6
console.log(ages.findIndex((cur) => cur >= 18));
console.log(ages.find((i) => i >= 18));
