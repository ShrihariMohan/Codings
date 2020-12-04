public class CJ14_MainMethodPart2 {
    // 1.7v enhancements related to main method
    // please declare main method as public static void main( String[] args)
    // more meaningful error
    public static void main(String args[]) {
        System.out.println("Main Function available");
    }
}

class dummy {
    static  {
        System.out.println("Hello  Static block");
        System.exit(0);
    }
}

/*
in 1.6v main method is not compulsory to run the program, static run and then runtime error
in 1.7v it is comppulsory

to prevent runtime error we can use System.exit(0)
 */
