public class CJ6_PrecedenceOfOps {
    public static void main(String[] args) {
     // Highest priority - unary operators
     // medium - binary
     // ternary
     // assignment
     int x = m1(1) + m1(2)*m1(3)/m1(4)+m1(5) ;
    }

    public  static  int m1(int arg) {
        System.out.println(arg + " .. ");
        return 0 ;
    }
}
