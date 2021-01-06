public class CJ7_InterviwQuestions {
    // 1. new vs newInstance()
    // 2. instanceof vs isInstance()
    // 3. class not found vs no class def found

    public static void main(String [] args) throws Exception {
        // 1. new - creates if you know which operator to create.
        // 2. newInstance() -> can create from command line also.
        Object o = Class.forName(args[0]).newInstance();
    }
}
