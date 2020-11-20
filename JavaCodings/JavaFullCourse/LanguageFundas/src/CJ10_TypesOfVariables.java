public class CJ10_TypesOfVariables {
    // There are 2 types of variables
    // 1. Primitive
    // 2. Reference Variable

    // Position of variables
    // 1. Instance vars - Heap Memory
    // 2. Static vars - DS or BSS
    // 3. Local Vars - Stack memory

    String name ;
    int rollNo ;
    static String collegeName = "XYZ" ;
    // The value of variable changes from object to object

    public static void main(String[] args) {
        int number ;
        int anotherNumber ;
        // System.out.println(name); Error -> static context non static variable
        // These are local variables
        int otherNumber ;
    }

    public void test() {
        System.out.println(name); // 100 % valid .. because of non static context
        CJ10_TypesOfVariables cj = new CJ10_TypesOfVariables();
        System.out.println(cj.name) ;
        System.out.println(cj.rollNo) ;

        // Default values 0 , 0.0 , null , false

        // static vars are created during class loading
        // destroyed during unloading
        // CLass Time = Static time
    }

    public void activity() {
        /*
        java className
        1. start JVM
        2. create and start main thread - JVM
        3. locate className.class file by mainThread
        4. Exception if no class is found
        5. load className.class -> static variables are created here
        6. Execute main method
        7. unload className.class -> destroy
        8. Terminate main Thread
        9. shut down JVM

         */
    }
}
