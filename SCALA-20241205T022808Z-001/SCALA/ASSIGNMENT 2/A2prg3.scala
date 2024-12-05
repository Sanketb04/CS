object A2prg3 {
  // Function to convert an integer to binary
  def toBinary(num: Int): String = {
    if (num == 0) "0"
    else {
      var binary = ""
      var n = num
      while (n > 0) {
        binary = (n % 2).toString + binary
        n = n / 2
        println(s"Binary representation: $binary")
      }
      binary
    }
  }

  // Function to convert an integer to octal
  def toOctal(num: Int): String = {
    if (num == 0) "0"
    else {
      var octal = ""
      var n = num
      while (n > 0) {
        octal = (n % 8).toString + octal
        n = n / 8
        println(s"Octal representation: $octal")
      }
      octal
    }
  }

  def main(args: Array[String]): Unit = {
    print("Enter an integer: ")
    val input = scala.io.StdIn.readInt()

    val binary = toBinary(input)
    val octal = toOctal(input)

    println(s"Binary representation: $binary")
    println(s"Octal representation: $octal")
  }
}
 
OUTPUT:
1] Enter an integer: 5
Binary representation: 1
Binary representation: 01
Binary representation: 101
Octal representation: 5
Binary representation: 101
Octal representation: 5

2] Enter an integer: 7
Binary representation: 1
Binary representation: 11
Binary representation: 111
Octal representation: 7
Binary representation: 111
Octal representation: 7

       
