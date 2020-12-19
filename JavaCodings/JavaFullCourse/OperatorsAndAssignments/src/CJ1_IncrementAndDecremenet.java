public class CJ1_IncrementAndDecremenet {
    // Most least scored Section in OCJA
    public static void main(String[] args) {
        int x = 10 ;
        x ++ ; // valid

        char c = 'a' ;
        c ++ ; // valid

        double d = 10.5 ;
        d ++ ; // valid

        boolean t = true ;
        // invalid

        byte b = 10 ;
        b ++ ;
        // b= b +1 ; b should be converted to byte in order to work
        // because +1 gives integer type
        /*
        What is the difference ??

         */

        byte ab = 10 ;
        byte ba = 20 ;
        // byte cc = ab + ba ; possible loss of precision
        //Arihmetic operator returns max of ( data types ) -> integer
        // result = max ( int , type of a , type of b )

        double testDouble = 10 / 0.0 ; // Infinity
        System.out.println(testDouble);
        testDouble = -10 / 0.0 ; // Infinity
        System.out.println(testDouble);
        testDouble = 0.0/0 ; // NAN
        System.out.println(testDouble);
//        int test = 10 / 0 ; // Airthmetic exception
//        test = 0/0 ; // Arithmetic Exception

        System.out.println(" After things ");
        System.out.println(10 <= Float.NaN);
        System.out.println(10 >= Float.NaN);
        System.out.println(10 < Float.NaN);
        System.out.println(10 > Float.NaN);

        System.out.println("NaN == Nan " + (Float.NaN == Float.NaN));
        System.out.println("Nan != NaN " + (Float.NaN != Float.NaN));

    }
}
