fun main() {
  var s = "abraded"
  var occ = HashMap<Char, Int>()
  for (i in s) {
    if (!occ.containsKey(i))
      occ[i] = 0
    occ[i] = occ[i]!! + 1
  }
  for (i in occ.keys) println("$i ${occ[i]}")

  var point = Pair(1, 2)
  var points = ArrayList<Pair<Int, Int>>()
  points.add(Pair(1, 1))
  points.add(point)
//  for (i in points) println("${i.first} ${i.second}")

//  CONVERTING COLLECTIONS INTO DIFFERENT COLLECTIONS:
  var set = points.toHashSet()
  var set2 = points.toSet()
  var set3 = points.toString()
  var set4 = points.toMutableSet()
  var set5 = points.toArray()
  var set6 = points.toList() // etc., etc.

  for (i in set) println("${i.first} ${i.second}")

//  TO FIND THE SIZE OF COLLECTIONS:
  println(points.size)
  println(s.length)


  var arr = Array<Int>(10, {i->0}) // Arrays are similar to int arr[] in c++
  println(arr.joinToString(" "))
  var arrlis = ArrayList<Int>(10) // ArrayLists are similar to vectors in c++
  println(arrlis.joinToString(" "))

  var triple = Triple<Int, Int, Int>(1, 2, 3)

  var mn = minOf(1, 2)
  var mn3 = minOf(1, 2, 3)

}