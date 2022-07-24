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
    var s = readLn()
    var smaller = 0
    var greater = 0
    var equal = 0
    for (i in s) {
      if (i == '=') equal++
      else if (i == '<') smaller++
      else greater++
    }
    if (equal == s.length) println('=')
    else if (smaller > 0 && greater > 0) println('?')
    else if (smaller > 0) println('<')
    else if (greater > 0) println('>')
  }
}