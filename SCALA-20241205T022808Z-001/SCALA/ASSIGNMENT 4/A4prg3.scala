object A4prg3{
  def wordRev(str1: String): String = {
    val each = str1.split(" ");
    var revString = "";
    for (i <- 0 to each.length - 1) {
      val word = each(i);
      var reverseWord = "";
      for (j <- word.length - 1 to 0 by -1) {
        reverseWord = reverseWord + word.charAt(j);
      }
      revString = revString + reverseWord + " ";
    }
    revString;
  }

  def main(args: Array[String]): Unit = {
    println("Enter the 1st string: ")
    val str1 = scala.io.StdIn.readLine()
    println("The new string after reversed the words: " + wordRev(str1));
    println("Enter the 2nd string: ")
    val str2 = scala.io.StdIn.readLine()
    println("The new string after reversed the words: " + wordRev(str2));
  }
}

->Enter the 1st string: 
programming
The new string after reversed the words: gnimmargorp 
Enter the 2nd string: 
paradigms
The new string after reversed the words: smgidarap 


