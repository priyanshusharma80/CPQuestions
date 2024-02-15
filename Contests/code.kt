fun solve() {
    var s = readLine()!!

    var c = 0
    var n = 0
    var ans = ""
    for (i in s.indices) {
        if (c != 0 && n != 0 && s[i] in '1'..'9') break
        if (s[i] in 'a'..'z') c++
        if (s[i] in '0'..'9') n++
        ans += s[i]
    }

    println(ans)
}

fun main() {
    repeat(readLine()!!.toInt()) {
        solve()
    }
}
