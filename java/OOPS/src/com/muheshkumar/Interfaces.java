package com.muheshkumar;

// In java, multiple inheritance is not possible whereas multilevel inheritance is possible. So, for this reason, we
// can use interfaces to achieve multiple inheritance

public class Interfaces implements Bike, Student {
  public static void main(String[] args) {

  }

  @Override // this is called as an annotation
  public void start() {
    System.out.println("My car is starting...");
  }

  @Override
  public void walk() {
    System.out.println("The student is walking...");
  }
}

interface Bike {
  void start();
}

interface Student {
  void walk();
}