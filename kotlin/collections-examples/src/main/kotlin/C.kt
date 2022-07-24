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
    var mnRhyme = 1000000
    var mxNotRhyme = -1
    repeat(n) {
      var (s, t, r) = readStrings()
      var ki = 0
      var i = s.length - 1
      var j = t.length - 1
      while (i >= 0 && j >= 0) {
        if (s[i] == t[j]) {
          ki++
        } else break
        i--
        j--
      }
      if (r == "0") {
        mxNotRhyme = maxOf(mxNotRhyme, ki)
      } else {
        mnRhyme = minOf(mnRhyme, ki)
      }
    }
    var ans = mutableListOf<Int>()
    for (i in (mxNotRhyme + 1)..mnRhyme) {
      ans.add(i)
    }
    println(ans.size)
    if (ans.size > 0) {
      println(ans.joinToString(" "))
    }
  }
}