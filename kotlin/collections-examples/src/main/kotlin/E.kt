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
    var s = readLn()
    var a = readLn()
    var ok = true
    var prev = a.indexOf('1')
    for (i in a.indices) {
      if (a[i] == '0') continue
      var d = i - prev
      if (d == 1 || d == 3) {
        ok = false
        break
      }
      prev = i
    }

    if (!ok) {
      println(-1)
    } else {
      var prev = "101".toCharArray()
      var comb1 = "()()"
      var comb2 = "(())"
      var t = s.toCharArray()

      for (i in a.indices) {
        if (a[i] != '1') continue
        if (i + 2 < a.length
          && prev[0] == a[i] && prev[1] == a[i + 1] && prev[2] == a[i + 2]) {
          t[i] = '('
          t[i + 1] = ')'
          t[i + 2] = '('
          t[i + 3] = ')'
        } else if (i - 2 >= 0
          && prev[0] == a[i] && prev[1] == a[i - 1] && prev[2] == a[i - 2]) {
          t[i] = '('
          t[i + 1] = ')'
          t[i + 2] = '('
          t[i + 3] = ')'
          prev[0] = '1'
          prev[1] = '0'
          prev[2] = '1'
        } else {
          var p = s.substring(i, i + 4)
          var cnt1 = 0
          var cnt2 = 0
          for (j in 0..3) {
            if (p[j] != comb1[j]) cnt1++
            if (p[j] != comb2[j]) cnt2++
          }
          if (cnt1 < cnt2) {
            t[i] = '('
            t[i + 1] = ')'
            t[i + 2] = '('
            t[i + 3] = ')'
          } else {
            t[i] = '('
            t[i + 1] = '('
            t[i + 2] = ')'
            t[i + 3] = ')'
          }
          prev[0] = '0'
          prev[1] = '0'
          prev[2] = '0'
        }
      }

      var ans = 0
      for (i in s.indices) {
        if (s[i] != t[i]) {
          ans++
        }
      }
      println(ans)
    }
  }
}