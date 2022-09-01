import java.util.Comparator;
import java.util.PriorityQueue;

public class LearnPriorityQueue {
  
  public static void main(String[] args) {

    // min-heap
    PriorityQueue<Integer> pq = new PriorityQueue<>(); // or Queue<Integer> pq = new PriorityQueue<>();
    
    pq.offer(10);
    pq.offer(4);
    pq.offer(7);
    pq.offer(2);

    System.out.println(pq);
    
    pq.poll();
    System.out.println(pq);
    
    System.out.println(pq.peek());
    
    // max-heap;
    PriorityQueue<Integer> mxpq = new PriorityQueue<>(Comparator.reverseOrder());
    
    mxpq.offer(10);
    mxpq.offer(4);
    mxpq.offer(7);
    mxpq.offer(2);
    
    System.out.println(mxpq);

  }

}
