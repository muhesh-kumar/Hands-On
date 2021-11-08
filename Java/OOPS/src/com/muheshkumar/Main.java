package com.muheshkumar;

// A .java file should only contain one public class named after the file name

import encapsulation.EncapsulationIntro;

public class Main {
  public static void main(String[] args) {
    Person p1 = new Person();
    p1.age = 18;
    p1.name = "Muhesh";
    System.out.println(p1.age + " " + p1.name);

    Person p2 = new Person();
    p2.age = 31;
    p2.name = "John Doe";

    System.out.println(p2.age + " " + p2.name);

    p1.eat();
    p2.walk();
    p1.walk(12);

    System.out.println("Number of created objects " + Person.cnt);

    Person p3 = new Person(12, "John");
    System.out.println(p3);

    Developer d1 = new Developer(24, "Virat");
    d1.walk();

    EncapsulationIntro obj = new EncapsulationIntro();
    obj.doWork();
  }
}

class Developer extends Person {
  public Developer(int age, String name) {
    super(age, name);
  }

  // runtime polymorphism
  void walk() {
    System.out.println("Developer " + this.name + " is walking...");
  }
}

class Person {
  protected String name;
  int age;

  static int cnt;

  public Person() {
    cnt++;
    System.out.println("Creating an object");
  }

  public Person(int age, String name) {
    this();
    // this keyword can be used for 2 purposes
    // 1. to call the default constructor in other type of constructors
    // 2. to use this keyword the same way we use this in C++
    this.age = age;
    this.name = name;
  }

  void walk() {
    System.out.println(name + " is walking...");
  }

  void eat() {
    System.out.println(name + " is eating..");
  }

  void walk(int steps) {
    System.out.println(name + " walked " + steps + " steps");
  }

  void doWork() {
    System.out.println(name + " is working...");
  }
}