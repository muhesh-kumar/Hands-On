import java.util.Stack;

public class StackExample {

  public static void main(String[] args) {
    Stack<Integer> st = new Stack<>();
    st.push(1);
    for (int i = 2; i < 5; i++) st.push(i);
    System.out.println("st: " + st);
    System.out.println(st.peek());
    st.pop();
    System.out.println(st);
  }

}
