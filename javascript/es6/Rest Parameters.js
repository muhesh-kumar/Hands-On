// ES5
function isFullAge5() {
  console.log(arguments);
}
isFullAge5(1, 2, 3);

// ES6
function isFullAge6(...years) {
  console.log(years);
}
isFullAge6(1, 2, 3);

// ES5
function isFullAges5(limit) {
  console.log(Array.prototype.slice.call(arguments, 1));
}
isFullAges5(18, 1, 2, 3);

// ES6
function isFullAges6(limit, ...years) {
  console.log(years);
}
isFullAges6(18, 1, 2, 3);
