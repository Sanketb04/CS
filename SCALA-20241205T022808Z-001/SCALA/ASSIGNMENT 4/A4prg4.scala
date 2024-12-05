object A4prg4 {
  def appendEqualize(str1: String, str2: String): String = {
    val len1 = str1.length
    val len2 = str2.length
    if (len1 > len2) {
      val diff = len1 - len2
      val truncatedStr1 = str1.substring(diff)
      truncatedStr1 + str2
    } else if (len1 < len2) {
      val diff = len2 - len1
      val truncatedStr2 = str2.substring(diff)
      str1 + truncatedStr2
    } else {
      str1 + str2
    }
  }
  def main(args: Array[String]): Unit = {
    println("Enter the first string: ")
    val str1 = scala.io.StdIn.readLine()
    println("Enter the second string: ")
    val str2 = scala.io.StdIn.readLine()
    val result = appendEqualize(str1, str2)
    println("Result: " + result)
  }
}

->Enter the first string: 
Arshiya
Enter the second string: 
Arshiy
Result: rshiyaArshiy

