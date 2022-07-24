private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of Longs
private fun readDoubles() = readStrings().map() { it.toDouble() } // list of doubles

fun main() {
  var (n, m) = readInts()
  var a = mutableListOf<Pair<Int, Int>>()
  var both = Array(n + 1) { IntArray(n + 1) }
  var single1 = IntArray(n + 1)
  var single2 = IntArray(n + 1)
  repeat(m) {
    var (f, l) = readInts()
    a.add(Pair(f, l))
    both[f][l]++
    single1[f]++
    single2[l]++
  }

  var ans = 0
  for (i in 1..n) {
    for (j in 1..n) {
      if (i == j) continue
      var c2 = both[i][j]
      var c1 = single1[i] - both[i][j]
      c1 += single2[j] - both[i][j]
      var c0 = m - (c2 + c1)
      var f1 = a[0].first
      var l1 = a[0].second
      var currMx = 0
      if (f1 == i && l1 == j) {
        currMx = maxOf(currMx, 1)
      } else if (f1 == i || l1 == j) {
        currMx = maxOf(currMx, c2 + 1)
      } else {
        currMx = maxOf(currMx, c2 + c1 + 1)
      }
      ans = maxOf(ans, currMx)
//      println("i :$i, j: $j, c2: $c2, c1: $c1, c0: $c0, currMx: $currMx")
    }
  }
  println(ans)
}