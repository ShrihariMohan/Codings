public class CJ5_AssignmentOperators {
    public static void main(String[] args) {

    }

    public static void assign(){
        // Simple assign
        int x  = 10 ;
        // complex
        int a , b , c ;
        a = b = c = 10 ;
        // Compound
        int ab = 10 ;
        ab += 10 ;

        byte by = 10 ;
         // by = by + 1 ERROR
        by  ++ ; // valid INTERNAL TYPECASTING
        by += 1 ; // valid INTERNAL TYPECASTING
    }

    public static void conditional() {
        // ?:
        // nothing here sorry
    }

    public  static void newOp() {
        // new -> means create objects.
        // whenever we create object  initialization is done using constructors
        // new create objects
        // no delete keyword
        // GC takes care of if - garbage collector

        int[] x = new int[10] ;
        // index of operator is used to create and index operation.
    }
}
