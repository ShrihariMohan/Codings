public class CJ2_DataTypesPart1 {
    public static void main(String[] args) {
        // Strongly Typed
        // int x = 10.5 ; Could not work here but in c it works

        /*
        * is java fully object ?
        * yes and no both are the answers
        * no is the best answer
        * still there are primitive types
        * oop features - operator overloading , Multiple inheritance
        * */

        bytes();
        shorts();
        ints();
    }

    public static void bytes() {
        //  1 B
        byte by = 127 ;
        System.out.println(by);
        // File Supported  or network supported form is byte
    }

    public  static void shorts() {
        // Much Powerful data type 2 B
        short sh = 100 ;
        System.out.println(sh);
    }

    public  static void ints(){
        int x = 2147483647 ;
        // integer number too large
        // every number is int in java so it must be in range
    }

}
