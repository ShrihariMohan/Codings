public class CJ12_VarArgMethods {
    // came in 1.5v java
    public static void main(String ... args) { // 100 % valid
        System.out.println(summing(10,20));
        System.out.println(summing(10,20,30));

        // if the no of args changes then it is a headache for programmer to
        // write all the methods with no of args

        // so var arg method came into picture
        System.out.println("Var Arg " + varArgSumming(10));
        System.out.println("Var Arg " +varArgSumming(10 , 20 , 30));

        System.out.println("One Arg Compulsory " + oneArgCompulsory(10));
        System.out.println("One Arg Compulsory " + oneArgCompulsory(10, 20 , 30));

        varArgSumming(); // var arg
        varArgSumming(10); // -> general method , no compiler error
        // general method and var arg method fights
        // always general method wins , 25 yrs of experience because 1.1v is general
        // var arg is 1.5v so experienced person wins
    }

    public  static  int summing(int a , int b) {
        return a + b ;
    }
    public  static  int summing(int a , int b , int c) {
        return a + b + c;
    }

    public  static  int varArgSumming( int ... x) {
        // var arg variable x is converted into single dimension array
        // index can be used to diff
        // 3 dots ... are best friends so they should be together
        int total = 0 ;
        for ( int item : x) {
            total += item ;
        }
        return total;
    }

    public  static  int varArgSumming( int x) {
        return x ;
    }

//    public static  int varArgSumming( int [] x) {
//        100 % invalid
//        method signature should be different
//        int ... x = int[] x
//    }

    public static  int oneArgCompulsory(int x , int ... y) {
        // the last parameter is the only place where var arg should present
        // its common sense da chellam
        // only one var arg is allowed
        // method ( int ... x , double ... y ) -> left and right compiler.
        int total = 0 ;
        if ( y.length != 0)
        total = x + y[0];
        else total = x ;
        return total;
    }

    public static void varArgSummingString( String ... s) {
        // one dimensional string array
    }

    public  static  void varArgSummings( int[] ... x) {
        // 2 dimensional integer array
    }

}
