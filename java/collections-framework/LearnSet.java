import java.util.*;

public class LearnSet {

  public static void main(String[] args) {

    // Set<Integer> set = new HashSet<>(); // random order
    // Set<Integer> set = new LinkedHashSet<>(); // maintains the order
    Set<Integer> set = new TreeSet<>(); // similar to set<int> in C++;
    
    set.add(32);
    set.add(52);
    set.add(52);
    set.add(12);
    set.add(39);
    
    System.out.println(set);
    
    set.remove(39);
    System.out.println(set);
    
    System.out.println(set.contains(39));
    System.out.println(set.contains(12));
    System.out.println(set.isEmpty());
    System.out.println(set.size());
    set.clear();
    System.out.println(set);

  }
  
}
