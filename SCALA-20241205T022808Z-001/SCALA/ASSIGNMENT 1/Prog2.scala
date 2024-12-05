
object Prog2{
def main(args:Array[String]):Unit={
print("Enter 4 number")
val n1=scala.io.StdIn.readInt()
val n2=scala.io.StdIn.readInt()
val n3=scala.io.StdIn.readInt()
val n4=scala.io.StdIn.readInt()
var  max1=n1
var  max2=n2
if(n2>max1)
{
max1=n2
max2=n1
}
if(n3>max1)
{max2=max1
max1=n3
}
else if(n3>max2)
{
max2=n3
}
if(n4>max1){
max2=max1
max1=n4
}
else if(n4>max2){
max2=n4
}
println(s"Second max number from $n1,$n2,$n3,$n4 : $max2 ")
}}

