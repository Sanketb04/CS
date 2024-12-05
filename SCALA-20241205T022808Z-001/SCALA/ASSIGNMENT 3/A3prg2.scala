object A3prg2{
def main(args: Array[String]): Unit = {
print("Enter a string: ")
val s = scala.io.StdIn.readLine()
print("Enter a character to count: ")
val characterToCount = scala.io.StdIn.readChar()
val characterCount = s.count(_ ==characterToCount)
println(s"The String Is:-"+s)
println(s"Character '$characterToCount' occurs $characterCount times in the string.")
  }
}

 
