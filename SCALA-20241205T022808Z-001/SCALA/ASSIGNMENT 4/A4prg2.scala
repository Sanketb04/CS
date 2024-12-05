object A4prg2 {
  def main(args: Array[String]): Unit = {
// Create an array of strings
    val strList = List("Rose", "Tulips", "Lotus", "Sunflower", "Daisy")
    //println(strList)
// Read a string from the user
    println("Enter a string to search for: ")
    val searchStr= scala.io.StdIn.readLine()
// Filter and display elements containing the given string
    val matchingStrings = strList.filter(_.contains(searchStr))
    if (matchingStrings.nonEmpty) {
      println(s" '$searchStr' is Found in the mentioned list below")
       println(strList)
      matchingStrings.foreach(println)
    } else {
      println(s"'$searchStr' is not found the mentioned list below.")
      println(strList)
    }
  }
}

