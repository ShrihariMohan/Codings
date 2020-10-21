public class CJ4_LiteralsPart1 {
    public static void main(String[] args) {
        int  x = 10 ; // base 10
        // Here 10 is a literal
        // The Constant value that can be applied to a variable

        int y = 010 ; // base 8 - octal
        int z = 0X100 ;
        System.out.println(y);
        System.out.println(z);

        //There is no 10b or 10s for byte and short
        // so we should use data type for this literals

        float fx = 10.00f ; // by default double so we have to put f suffix
        double lx = 10.0d ;
        double lxx = 10.0f ;

        // No hex oct for double
        // CE : malformed floating point literal

        // double dd = 0786 ; Integer nubber too large
        double dx = 0xface ; // 100 % valid

    }
}
