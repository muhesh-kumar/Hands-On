import java.util.*;

public class LearnMap {

  public static void main(String[] args) {
    
    Map<String, Integer> numbers = new HashMap<>(); // equivalent to unordered_map<string, int> in c++
    // Map<String, Integer> numbers = new TreeMap<>(); // equivalent to map<string, int> in c++
    numbers.put("One", 1);
    numbers.put("Two", 2);
    numbers.put("Three", 3);
    numbers.put("Two", 4); // equivalent to numbers["Two"] = 4;
    
    if (!numbers.containsKey("Two")) {
      numbers.put("Two", 23);
    }
    numbers.putIfAbsent("Two", 23);
    
    System.out.println(numbers);

    for (Map.Entry<String, Integer> e: numbers.entrySet()) {
      System.out.println(e);
      System.out.println(e.getKey());
      System.out.println(e.getValue());
    }
    System.out.println("------------");

    for (String key: numbers.keySet()) {
      System.out.println(key);
    }
    numbers.remove("One");
    System.out.println(numbers);
    
    System.out.println(numbers.containsValue(4));
    System.out.println(numbers.isEmpty());
    numbers.clear();
    System.out.println(numbers.isEmpty());

  }
  
}
