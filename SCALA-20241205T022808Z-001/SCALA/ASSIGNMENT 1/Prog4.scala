object Prog4{
def main(args:Array[String]):Unit={
println("Enter the Number1(n1) & Number2(n2) :")
var a = scala.io.StdIn.readInt()
var b = scala.io.StdIn.readInt()
var count =0
var sum:Double=0
for(i<-a to b)
{
sum=+i
count=count+1
}
var  av:Double =0
av=sum/count
println(s"Average of Number between  $a to $b is : $av ")
}
}
