object A3prg4{
def main(args:Array[String]):Unit={
print("Enter the String:")
val ipstr=scala.io.StdIn.readLine()
if(isPalindrome(ipstr))
{
println(ipstr+" is a Palindrome")
}
else
{
println(ipstr+" is not palindrome")
}
}
def isPalindrome(str:String):Boolean={
val cleanStr=str.toLowerCase.replaceAll("[^a-z0-9]",",")
val reversedStr=cleanStr.reverse
cleanStr==reversedStr
}
}

->Enter the String:kinnikinnik
kinnikinnik is a Palindrome
->Enter the String:Scala            
Scala is not palindrome
