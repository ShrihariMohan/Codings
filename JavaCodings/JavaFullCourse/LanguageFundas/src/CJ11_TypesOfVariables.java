public class CJ11_TypesOfVariables {
    // to meet temperoary requirements of the programmer
    // inside block
    // inside method
    // inside the constructor
    int x = 20 ;
    int [] testArray ;
    int [] anotherTestArray = new int[3];
    public static void main(String[] args) {
        try {
            int j = Integer.parseInt("10");
        }
        catch (NumberFormatException e) {
            // j = 10 ; j is local var of try block
            // so left and right
        }

        // before using we should provide init
        // else left and right
        int x ;
        // System.out.println(x);
        // CE : x might not have been initialized

        if ( args.length > 0) {
            x = 10 ;
        }
        // System.out.println(x); same CE
        final int applicableModifier = 10 ;
        // Local has only one modifier that is final
        // else illegal start of expression
        test();
        int [] local ;
        // System.out.println(local); might not have been initialized

        int [] anotherLocal = new int[3];
        System.out.println(anotherLocal); // valid
        System.out.println(anotherLocal[0]); // valid 0
        // array property is dominated than local , static and instance so .. 0 will be there

    }

    public  static  void test() {
        CJ11_TypesOfVariables cj = new CJ11_TypesOfVariables();
        System.out.println(cj.testArray);
        // System.out.println(cj.testArray[0]); // Null pointer exception

        System.out.println(cj.anotherTestArray);
        System.out.println(cj.anotherTestArray[0]);
    }
}
