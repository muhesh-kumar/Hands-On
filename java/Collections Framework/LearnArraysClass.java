import java.util.*;

public class LearnArraysClass {
  
  public static void main(String[] args) {
    
    int numbers[] = {4,5, 7, 8, 9, 1,2, 4};
    Arrays.sort(numbers); // quicksort

    int index = Arrays.binarySearch(numbers, 2);
    System.out.println(index);
    index = Arrays.binarySearch(numbers, 3);
    System.out.println(index);

    Arrays.fill(numbers, 12);
    for (int i: numbers) {
      System.out.print(i + " ");
    }

  }

}
