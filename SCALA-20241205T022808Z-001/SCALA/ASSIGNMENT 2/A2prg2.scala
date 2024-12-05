
object A2prg2{
def isPrime(n :Int):Boolean ={
if (n<= 1) false 
else if (n<=3) true
else if (n % 2 == 0 || n % 3 == 0 ) false
else {
var i = 5
while ( i * i <= n ){
	if ( n % i == 0 || n % (i+2)== 0) return false
	i += 6
 }
	true
    }
  }
 def main(args: Array[String]): Unit={
 var sum=0
 println("Prime numbers between 1 to 100 are Listed below:")
 for(i<- 1 to 100) {
	if(isPrime(i)){
	sum += i 
	println(s"$i")
}
}
println(s"\n\n The SUM Of Prime Numbers From 1 to 100  is :$sum")
}
}

OUTPUT:
Prime numbers between 1 to 100 are Listed below:
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97


 The SUM Of Prime Numbers From 1 to 100  is :1060

