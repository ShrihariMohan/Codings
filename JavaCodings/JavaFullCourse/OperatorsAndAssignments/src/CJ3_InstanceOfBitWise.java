public class CJ3_InstanceOfBitWise {
    public static void main(String [] args) {
      // instance()
        bitWise();
    }

    public static void instance() {
        // To perform object specific functionality
        String s = "Hello" ;
        Object o = new String("there");
        Thread t = new Thread();
        System.out.println(t instanceof Thread);
        System.out.println(t instanceof Object);
        System.out.println(t instanceof Runnable);
        // System.out.println(t instanceof String); -> compile time error
        // to use instanceof
        // Must have a relation
        // inconvertible types
        // null instanceof anything - always false
    }

    public static void bitWise() {
        // same c concept you know it alredy
        // ~ only on integer types
        System.out.println(5 & 5);
        System.out.println(true ^ false);
        System.out.println(~10);
        System.out.println(~-10) ;

        // ! only boolean type

    }
}
