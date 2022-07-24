import java.util.*

//FUNCTIONS:

fun sum(x: Int, y: Int): Int {
  return x + y;
}

fun main() {

//  var name = readLine().toString();
//  println(name);

//  var name: String;
//  name = readLine().toString();
//  println(name);

//  var isTrue:  Boolean = true;
//  var isFalse: Boolean = false;
//  var stringBooleanTrue = isTrue.toString();
//  var stringBooleanFalse = isFalse.toString();
//  print(isTrue.toString() + " " + isFalse.toString());
//  print(stringBooleanTrue + " " + stringBooleanFalse);

//  val result = when (readLine()!!.toInt()) {
//    1 -> "Monday"
//    2 -> "Tuesday"
//    3 -> "Wednesday"
//    4 -> "Thursday"
//    5 -> "Friday"
//    6 -> "Saturday"
//    7 -> "Sunday"
//    else -> "Invalid day."
//  }
//  println(result);


//  var tc: Int = readLine()!!.toInt();
//  while (tc-- > 0) {
//    println(tc);
//  }

//  FOR LOOPS:
//  for (i in 1..10) println(i)
//  for (i in 'a'..'z') println(i)

//  ARRAYS:
//  val nums = arrayOf(1, 2, 3, 4);
//  println("Size ${nums.size}");
//
//  if (3 in nums) print("3 exists") else print("3 doesn't exist")

//  println(nums);
//  nums.forEach { print("$it ") };
//  println();
//  for (i in nums) {
//    print("$i ");
//  }
//  println();
//  for (i in nums.indices) {
//    print(nums[i]);
//    print(" ");
//  }
//  println();
//  println(nums.contentToString());
//
//  val matrix = arrayOf(arrayOf(1, 2, 3), arrayOf(4, 5, 6));
//  println(matrix.contentToString());
//  println(matrix.contentDeepToString());

//  FUNCTIONS:
  println(sum(2, 3));

//  IO
  print("hello world ")
  print("hello world\n")
  println("hello world")
  println("hello world")

  var nums = readLine()!!.toList();
}