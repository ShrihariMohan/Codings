public class CJ3_DataTypesPart2 {
    public static void main(String[] args) {
        longs();
        floats();
        doubles();
        booleans();
        chars();
    }

    public  static  void longs() {
        // Very Long Values
        System.out.println(1234567890981111111l);
    }

    public  static  void floats() {
        // Less precision 4 B
        System.out.println(22.0f/7);
    }

    public  static  void doubles() {
        // More precision 8 B
        System.out.println(22.0/7);
    }

    public  static  void booleans() {
        boolean bool = true ;
        bool = false ;
        System.out.println(bool);
        int x = 0 ;
        // Unlike c and c++ Java is very strict
        if ( true ) {
            System.out.println("If only accepts boolean");
        }
        else System.out.println("NO");
    }

    public  static void chars() {
        // Size is 2 B
        // Unicode based not ascii based
        // it has more characters than ascii

    }
}
