object Prog3{
def main(args:Array[String]):Unit={
println("Enter the number:")
val x= scala.io.StdIn.readInt()
var fact = 1
var i=1
while(i<=x)
{
fact=fact*i
i=i+1
}
println(s"Factorial of $x is: $fact")
}
}
