public class CJ15_CommandLineArgs {
    // Customize behaviour of main method
    public static void main(String args[]) {
        for ( int i = 0 ; i < args.length ; i ++) {
            System.out.println("Hello " + i );
        }
        String argh [] = {"x" , "y" , "z"};
        args = argh;
        for ( String s : args) {
            System.out.println(s);
        }
    }
}
