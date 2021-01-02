import java.io.ObjectStreamException;

public class CJ2_ConcatRelationalEquality {
    public static void main(String[] args) {
        // Only overloaded operator in java is +
        // Operator overloading - at lang level no
        // + is exceptional
        String s = "Hello" ;
        int a = 10 , b = 20 , c = 30 ;
        System.out.println(s + a + b + c);
        System.out.println( b + c + a + s);
        System.out.println(b + s + a + c);
        // left to right
        // if one arg is string - result = string means concatenation

        a = a + b + c ;
        s = s + a + b ;
        s = a + b + s ;
        // s = a + b + c ; // Incompatible types

        //  *************** relational operators **************************
        // in jave only boolean will be returned not 1 or 0

        System.out.println(10 < 20);
        System.out.println('a' < 'b');
        System.out.println(96 < 'a');
        // System.out.println(10 < 20 < 30 ); // compile time error
        // System.out.println(true < false); true and false cant be compared
        // except boolean .. relational can be applied to any primitive type
        // cannot be applied to objects

        System.out.println( true == false);
        System.out.println(10 == 20);
        System.out.println('a' == 97.0);
        // equality can be applied to any primitive types
        // can be used for reference or object equality
        // true if both reference poiting to same object
        System.out.println("hello" == "hello");
        System.out.println("hello" == "hi");

        Thread t = new Thread();
        Object o = new Object();
        String se = new String();

        System.out.println( t == o); // child - parent
        System.out.println( o == se); // parent - child
        // System.out.println(se == t);  // incompatible types
        // to use == operator there should be a relation between 2 operands

        // == and .equals() -> content comparison

        String s2 = new String("Hello");
        String s3 = new String("Hello");

        System.out.println("reference comparison "+ (s2 == s3));
        System.out.println("Content comparison " + s2.equals(s3));

        Object any = new Object();
        System.out.println(any == null); // always false
        System.out.println(null == null); //always true
    }
}
