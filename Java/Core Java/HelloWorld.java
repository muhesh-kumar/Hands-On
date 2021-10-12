import java.util.Date;
// import java.util.Scanner;
import java.util.Arrays;
// or we can directly import java.util;

public class HelloWorld {
  public static void main(String[] args) {
    System.out.println("Hello World");    
    int age = 10;
    System.out.println(age);

    int largeNumber = 123_456_789; // we can use _ to separate 3 digits of a large number
    System.out.println(largeNumber);
    
    long veryLargeNumber = 12345678901234L; // we shall use L at the end to tell the compiler that we want to use a long value
    System.out.println(veryLargeNumber);
    
    double longDecimal = 1000000000.123234;
    float decimal = 19.23F; // we shall use F at tne end to tell the compiler that we want to use a float value instead of double
    
    System.out.println(longDecimal);
    System.out.println(decimal);
    
    boolean isTrue = true;
    boolean isFalse = false;
    System.out.println(isTrue);
    System.out.println(isFalse);
    
    Date now = new Date(); // creating reference type variables
    System.out.println(now);

    // STRINGS:
    String name = "Muhesh Kumar";
    String name2 = new String("Muhesh Kumar"); // this way of creating strings is redundant as we can create strings without using String() constructor
    System.out.println(name);
    System.out.println(name2);
    
    System.out.println(name.length());
    System.out.println(name.endsWith("!!"));
    System.out.println(name.indexOf('u'));
    System.out.println(name.indexOf("Kum"));
    System.out.println(name.replace("Kumar", "kumar"));
    System.out.println(name.toLowerCase());
    System.out.println(name.trim());
    
    // Arrays
    int arr[] = {1, 2, 3};
    int[] arr2 = {3, 4, 5};
    int[] numbers = new int[5]; // all items get initialized to 0. false in case of boolean arrays, and empty strings in case of arrays of strings
    int nums[] = {5, 4, 3, 2, 1};
    int numbers2[] = new int[5];
    System.out.println(arr); // prints the address of the array
    System.out.println(arr2);
    System.out.println(numbers);
    System.out.println(numbers2);
    System.out.println(Arrays.toString(numbers)); // prints array contents like this [a1, a2, ..., an]
    System.out.println(numbers.length);
    Arrays.sort(nums);
    System.out.println(Arrays.toString(nums));
    
    // 2D Arrays:
    int matrix[][] = new int[2][3];
    matrix[0][0] = 1;
    System.out.println(Arrays.deepToString(matrix)); // to print 2d arrays
    
    int binMatrix[][] = {
      {0, 1, 0},
      {0, 0, 0}
    };
    System.out.println(Arrays.deepToString(binMatrix));
    
    // CONSTANT LITERALS:
    final float PI = 3.14F; // usually constant literals are declared using final keyword and named in UPPERCASE
    System.out.println(PI);
    
    // TYPECASTING:
    // Explicit casting
    double decimal2 = 1.2;
    int integer = (int) decimal2;
    System.out.println(integer);
    String x = "12";
    int xNum = Integer.parseInt(x);
    System.out.println(xNum);
    
    String y = "1.2";
    double yNum = Double.parseDouble(y);
    System.out.println(yNum);
    
    // Math class -- contains a lot of functions related to math
    System.out.println(Math.min(3, 2));

    // I/O
    // Scanner scanner = new Scanner(System.in);
    // int n = scanner.nextInt();
    // System.out.println(n);
    
    // String str = scanner.next(); // inputs a single string token
    // System.out.println(str);
    
    // String line = scanner.nextLine();
    // System.out.println(line);
    // 
   
    // Syntax for Conditionals and Loops are the same as in C/C++
  }
}