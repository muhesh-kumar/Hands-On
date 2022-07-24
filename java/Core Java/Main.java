public class Main {
  public static void main(String[] args) {
    Color c1 = Color.RED;
    System.out.println("Red Enum name: " + c1.name()); // .name() returns the name of the enum variable
    System.out.println("Red Enum value: " + c1.getValue()); // .getValue() returns the value of the enum variable

    for (Color color: Color.values()) { // Color.values() contain all the enum variables declared inside the enum Color
      System.out.println("Enum value: " + color.getValue());
    }
  }
}