private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of Longs
private fun readDoubles() = readStrings().map() { it.toDouble() } // list of doubles

fun main() {
  var tc = readInt()
  repeat(tc) {
    var n = readInt()
    var (a, va) = readInts()
    var (c, vc) = readInts()
    var b = readInt()
    var ans = -1
    for (vi in va..vc) {
      var curr = vi
      for (i in (b + 1)..c) {
        curr = minOf(curr + 1, vc)
      }
      if (curr == vc) {
        ans = vi
        break
      }
    }
    println(ans)
  }
}