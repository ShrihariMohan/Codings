public class CJ8_ArraysPart3 {
    public static void main(String[] args) {

        // Create and put values in single line
        // Array of arrays can also be created like this
        int x[] = {10 , 20 , 30} ;
        int xx[][] = {{10 , 20} , { 30 , 40 , 50}} ;

        // To answer more than 2d array always use memory diagram to answer easily

        /*
        int x[] ; valid
        x = {1, 2, 3} ; Not valid - illegal start of expression

        length vs length()
        int x[] = new int[6] ;
        sout x.length() -> cannot find symbol method length class int array
        sout x.length -> valid - variable - final variable

        String s = "Shrihari"
        s.length -> CE : cannot find symbol vairable length
        s.length() -> method - Final method - class itself is final

        if variable is array then length is avaibale
        String s = {"Hari" , "Shri" , "Shrihari"}
        s.length -> valid
        s.length(0) -> invalid
        s[0].length -> invalid
        s[0].length -> valid


        Anonymous Array
        1. Instant use
        2. no name
        3. we cannot specify size

         */

        System.out.println (sum ( new int[]{10,20}));
        Runnable[] r  = new Runnable[10] ; //  Interface array is 100 % valid
        r[0] = new Thread() ;
        // r[1] = new String("Hari") Not valid string parent is not runnable
        // Interface array values should be implemented class of that interface
    }

    public static  int sum ( int [] arr) {
        return arr[0] + arr[1] ;
    }
}
