object Prog1{
def main(args:Array[String]):Unit={
print("Enter the number")
var a= scala.io.StdIn.readDouble()
if(a>0){print(s"$a is Positive")}
else if(a<0){print(s"$a is Negative")}
else {print(s"$a is zerooo")}
}
}
