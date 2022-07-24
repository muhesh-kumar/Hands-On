package encapsulation;

public class EncapsulationIntro {
  public static void main(String[] args) {
    Laptop l1 = new Laptop();
//    System.out.println(l1.price); // cannot access a private property of an object
    l1.setPrice(10);
    System.out.println(l1.getPrice());
  }

  public void doWork() {
    System.out.println("Working working..");
  }

  // the following function will be available inside this package or inside all its child packages => this is the
  // default behaviour
//  void doWork() {
//    System.out.println("Working working..");
//  }

  // this function won't be available anywhere outside this class
//  private void dowork() {
//    system.out.println("working working..");
//  }

  // this method will be accessible within and from all the child classes
//  protected void doWork() {
//    System.out.println("Working working..");
//  }

}
class Laptop {
  int ram;
  private int price;

  public void setPrice(int price) {
    boolean isAdmin = false;
    if (!isAdmin) {
      System.out.println("You are not an admin. So, you cannot set the price");
    } else {
      this.price = price;
    }
  }

  public int getPrice() {
    return this.price;
  }
}