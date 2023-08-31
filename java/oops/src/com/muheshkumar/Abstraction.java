/**

Abstract Classes - cannot be instantitated
Abstract Methods:
  - have no method body
  - need to be inside abstract classes or interfaces

- Avoids code duplication and increases reusability
- The purpose of an abstract class is to function as a base for a sublcass
- Encapsulate some common functionality in one place and let sub classes implement differences

**/


package com.muheshkumar;

public class Abstraction {
  public static void main(String[] args) {
    Audi a = new Audi();
    a.start();
  }
}

class BMW extends Car {
  @Override
  void start() {
    System.out.println("BMW is starting");
  }
}

class Audi extends Car {
  @Override
  void start() {
    System.out.println("Audi is starting");
  }
}

abstract class Car { // cannot create Car objects
  String brand;
  int price;

  // the class must also be abstract in order to have a abstract function
  abstract void start(); // don't need to implement it

  void breaks() {
    System.out.println("Car is breaking...");
  }
}
