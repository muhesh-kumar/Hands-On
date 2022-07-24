// import 'package:dart_application_1/dart_application_1.dart'
//     as dart_application_1;

// import 'dart:io'; to handle i/o

int globalInteger = 10;

void main(List<String> arguments) {
  // num age = 13;

  // num number = 23;
  // print(number);

  // int age = 13;
  // double number = 23.34;

  // print(age);

  // bool isTrue = true;
  // bool isFalse = false;

  // print(isTrue);

  // const and final keywords
  // const - used when we want the variable to be a constant at compile-time
  // final - we use final if the variable should be constant in both compile and run time.
  // var country = "Jamaica";
  // const pi = 3.14;

  // final PI = 3.14;
  // print(PI);

  // concatenation
  // String name = "James";
  // int age = 45;
  // String lastName = "Bond";
  // print("$name $lastName is $age years old.");
  // print('Hello there $name!');
  // print('Hello $name.toUpperCase()');
  // print('Hello ${name.toUpperCase()}');

  // print(1 == 2);

  // int number = 2;
  // print(number is bool);
  // print(number is int);
  // print(number is! String);

  // sayHello();
  // greet('John');
  // welcome();
  var Hi = sayHi('John');
  print(Hi);
  putName('John');

  print(add(2, 3));
  print(add(2, 3, 4));
  print(add(2, 3, 4, 5));

  print('globalInteger : $globalInteger');

  var scopeVariable = 'Outside the function';

  void localFunction() {
    // var scopeVariable = 'Inside the function';\
    scopeVariable =
        'Inside the function'; // the variable declared outside's value gets changed
    print(scopeVariable);
  }

  localFunction();

  print(scopeVariable);

  var list = [1, 2, 3, 4, 5];
  print(list);
  print(list.length);

  var map = {'first': 'A', 'second': 'B', 'third': 'D'};
  map.forEach((key, value) => print(key));
  // var mapKeys = map.keys;
  var mapValues = map.entries;
  print(mapValues);
}

// sayHello() {
//   print('hello there');
// }

// greet(var name) {
//   print('Hello $name!');
// }

// welcome() {
//   String name = stdin.readLineSync();
//   if (name.contains('M'))
//     print(name);
//   else
//     print('Nah');
// }

String sayHi(var name) {
  return 'Hi $name';
}

String putName(var name) => name; // only works for a single line of code
String printPerson(var firstName, var lastName, [int age]) =>
    'Hello $firstName $lastName';

int add(var a, var b, [var c, var d]) {
  // put the optional parameters inside square brackets
  var answer = a + b;
  if (c != null) answer += c;
  if (d != null) answer += d;

  return answer;
}
