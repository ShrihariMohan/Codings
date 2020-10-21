public class CJ5_LiteralsPart2 {
    //String Literals
    public static void main(String[] args) {
        char ch = 'a' ;
        //char ch1 = a ; search of variable
        //char ch2 = "a" ; found string required char

        /*
            Any sequence of characters within double quotes is string literals
        */
        String s = "Shrihari" ;

        // 1.7 Version Enhancements on literals
        /*
        1. Binary Literals
        int x = 15 ;
        or
        int x = 0b1111 ;

        2. Usage of _ in numerical
        int x = 10101010 ;
        or
        int x = 10_101_010;

        only applicable for .java file not for .class file
        we can use more than one _ between digits

         */

        // 8 byte long can be assigned to float variable because difference in memory representation
        float fd = 10l ;
        System.out.println(fd);

    }
}
