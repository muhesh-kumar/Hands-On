package com.muheshkumar;

public class Main {
  public static void main(String[] args) {
    try {
      int data = 100 / 0;
    } catch(ArithmeticException e) { // or catch(Exception e) in general for any type of exceptions
      System.out.println("Program crashed.. Reason: Divide by 0 error!");
    }
    try {
      String s = null;
      System.out.println(s.length());
    } catch(NullPointerException ne) {
      System.out.println("Null Pointer Exception!");
    }
  }
}