public class CJ4_ShortCircuitandTypeCase {
    public static void main(String[] args) {
        // shortCircuit();
        typeCastOperator();
    }

    public static void shortCircuit() {
        // Same concept in c
        int x = 10 ;
        if ( ++x < 10 && (x/0) > 15) System.out.println("Hello");
        else System.out.println("hi");

        // && -> no error
        // & -> arithmetic exception
    }

    public  static void typeCastOperator() {
        // 2 typer
        // implicit and explicit

        // implicit - widening - upcast - no loss of information
        // samller data type to higher data - this only valid
        int x = 'a';
        System.out.println(x);


        // explicit
        int lx = 10 ;
        byte b = (byte)lx ; // programmer takes care of the loss of precision
    }
}
