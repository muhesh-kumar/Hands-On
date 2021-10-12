import java.util.*;

public class LearnCollectionsClass {

  public static void main(String[] args) {
    
    List<Integer> list = new ArrayList<>();
    for (int i = 0; i < 20; i++) {
      list.add(i);
    }
    System.out.println(Collections.min(list));
    System.out.println(Collections.max(list));
    System.out.println(Collections.frequency(list, 3));
    
    System.out.println(list);
    Collections.sort(list, Comparator.reverseOrder());
    System.out.println(list);

  }
  
}
