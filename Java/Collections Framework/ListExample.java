import java.util.*;

public class ListExample {

  public static void main(String[] args) {

    ArrayList<String> studentsName = new ArrayList<>(); // creates a dynamic array of size 10
    studentsName.add("Muhesh");

    List<Integer> list = new ArrayList<>();
    // all the below methods work for LinkedList<>() too
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(1, 4);
    System.out.println(list);
    
    List<Integer> newList = new ArrayList<>();
    for (int i = 0; i < 10; i++) {
      newList.add(i);
    }
    
    list.addAll(newList);
    System.out.println(list);
    System.out.println(list.get(1));
    list.remove(1);
    System.out.println(list);
    list.remove(Integer.valueOf(1));
    System.out.println(list);
    
    list.set(1, 100);
    System.out.println(list);
    System.out.println(list.contains(30));
    
    for (int i = 0; i < list.size(); i++) {
      System.out.println(list.get(i));
    }
    System.out.println("-----");
    
    for (Integer i: list) {
      System.out.println(i);
    }
    System.out.println("----");
    
    for (int i: list) {
      System.err.println(i);
    }
    System.out.println("----");
    
    Iterator<Integer> it = list.iterator();
    while (it.hasNext()) {
      System.out.println(it.next());
    }
    System.out.println("-----");

    list.clear();
    System.out.println(list);

  }

}