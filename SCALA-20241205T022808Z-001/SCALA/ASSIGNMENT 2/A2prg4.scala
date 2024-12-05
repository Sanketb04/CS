object A2prg4{
def main(args: Array[String]): Unit = {
val limit: Int = 20 // Print the Fibonacci series

var num1: Int = 0
var num2: Int = 1

println(s"Fibonacci Series upto $limit: ")
print(s" $num1 $num2")

var sum: Int = num1 + num2 //passing function as variable
while (sum <= limit) {
print(" "+ sum)

num1 = num2
num2 = sum
sum = num1 + num2
}
}
}


OUTPUT: Fibonacci Series upto 20: 
 0 1 1
 2
 3
 5
 8
 13

