object A4prg1 {
def main(args: Array[String]): Unit = {
    println("Enter the 1st string: ")
    val str1 = scala.io.StdIn.readLine()
    println("Enter the 2nd string: ")
    val str2 = scala.io.StdIn.readLine()


  def checkRotation(str1: String, str2: String): Boolean = {
    if (str1.length != str2.length) {
      false
    } else {
      val concatenateStr = str1 + str1
      concatenateStr.contains(str2)
    }
  }
if (checkRotation(str1, str2)) {
      println(s"$str1 and $str2 are rotations of each other.")
    } else {
      println(s"$str1 and $str2 are not rotations of each other.")
    }
  }
}

->Enter the 1st string: 
absc
Enter the 2nd string: 
scab
absc and scab are rotations of each other.

->Enter the 1st string: 
scala
Enter the 2nd string: 
scla
scala and scla are not rotations of each other.


