public class CJ13_MainMethod {
    // whether the class contains main method or not .. it will compile
    // javac test.java -> success
    // java test -> RE - no such method error : main
    // JVM is responsible for this
    public static void mainDummy(String[] args) {
    /*
    Main should be public static void
    red shirt - public - to call by JVM
    green pant - static - without existing object also JVM should be able to call
    yellow cap - void - since JVM calls main we dont have anything to do with it hence void


    JVM is also a software .. if we want to change the main ofcourse we can do
    but customization of JVM is required

    why the name main() ? it is configured inside JVM
    Order of modifiers are not important
    public static
    static public

    String[] args
    String[] commandLineArgs
     */
    }

    // beautiful Main method()
    static final synchronized strictfp public void main( int ... args) {
        System.out.println("Parent Main");
    }

    public  static  void main(String[] args) {
        // overloading of main method is possible
        System.out.println("Parent Main");
    }
}

class testMain extends  CJ13_MainMethod {
    // parent main is executed here
    // over riding is applicable which is called method hiding

    public  static  void main(String[] args) {
        System.out.println("CHild main");
    }
}
