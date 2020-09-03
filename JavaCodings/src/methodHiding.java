class parent1 {
    public  static  void print(){
        System.out.println("Parent");
    }
}

class child1 extends parent1{
    public static void print(){ // OBJECT METHOD
        System.out.println("Child");
    }

    public  void childPrint() { // INSTANCE METHOD
        System.out.println("NON static print");
    }
}
public class methodHiding {
    public static void main(String[] args) {
        child1.print(); // OBJECT
        child1 ch = new child1();
        ch.childPrint();
    }
}
