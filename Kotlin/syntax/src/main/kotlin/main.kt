private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of Longs
private fun readDoubles() = readStrings().map() { it.toDouble() } // list of doubles

fun main() {
  print("Hello");
  print("Hello");
  println("Hello");
  println("Hello");

  var mx = maxOf(1, 2);
  var mx2 = maxOf(1, 2, 3);

//  Reading multiple inputs on a single line
  var (n, m) = readInts();

//  LOOPS:
  repeat(n) { // to repeat the codeblock n times
    println("Hello");
  }

//  to loop from 0 to n - 1 i.e., [0, n)
  for (i in 0 until n) {
    println(i);
  }

  for (i in 0..n) { // to loop from 0 to n - 1 (both inclusive) [0, n - 1]
    print("$i ");
  }

//  to loop in reverse order
  for (i in 5 downTo 1) print(i)
  //-> 54321

//  to change the increment value
  for (i in 3..6 step 2) print(i)
  //-> 35

//  to print the contents of a collection or something iterable
  for (i in array) {
    print("$i ");
  }

  val array = arrayof(1, 3, 9)
  for (item in array) {
      //loops items
  }
  for (index in 0..array.size - 1) {
    //loops all indices
  }
  for (index in 0 untill array.size) {
      //loops all indices
  }
  for (index in array.indices) {
      //loops all indices (performs just as well as two examples above)
  }

//  STRINGS:
  var str = "Hello";
  println(str.substring(0, 3)) // similar to C++ substr() function
//  String length
  var strLength = str.length;

  //  ARRAYS:
    var a = IntArray(n);
    var visited = BooleanArray(n);

//  DYNAMIC ARRAYS:
  var a = ArrayList<Long>()
  for (i in 0 until 10) a.add(i);

  var strings = mutableListOf<String>()
  for (i in 'a' until 'z') {
    strings.add(i);
  }
  strings.clear(); // to empty the list
  strings.sort(); // to sort the list
  println(a[0]); // can also access the elements using indexing

  // To print the elements of an array separted by a delimiter
  println(arrayName.joinToString(" "));


}