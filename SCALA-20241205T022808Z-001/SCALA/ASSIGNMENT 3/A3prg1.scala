object A3prg1{

    def main(args: Array[String]): Unit = {
    val str = "ARSHIYA SHAIKH";
    // Convert the above string to all lowercase.
    val cnt = str.count(_.isUpper);
    val lowerStr = str.toLowerCase();
    println(s"Original String: " + str);
    println("Count : "+ cnt);
    println(s"String in lowercase: " + lowerStr);
}
       

OUTPUT:
Original String: ARSHIYA SHAIKH
Count : 13


    
