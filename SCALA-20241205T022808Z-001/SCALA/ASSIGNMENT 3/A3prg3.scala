object A3prg3{
	
	def main(args: Array[String]){
	println("Enter The String")
	val str = scala.io.StdIn.readLine();	
	println("Enter The Position to Remove(0 to -1): ")
	val n= scala.io.StdIn.readInt();
	val adjpos = if(n>=0)n else str.length+n
	if(adjpos >=0 && adjpos < str.length)
      {
	val modified=removePos(str,adjpos)
	println(s"String after Removing the position")
	println(modified)
      }
	else{ println(s"Invalid Position!!!!")
		}
	}
        def removePos(str:String, n:Int):String={
	if(n>=0 &&  n<str.length){
        str.substring(0,n) + str.substring(n+1)
	}
        else{str}
	}
}


OUTPUT:
->Enter The String
Scala
Enter The Position to Remove(0 to -1): 
-1
String after Removing the position
Scal
->Enter The String
Scala
Enter The Position to Remove(0 to -1): 
2
String after Removing the position
Scla


