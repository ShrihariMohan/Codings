class parent {
    private int id ;
    public  void test() {
        System.out.println("Parent");
    }

    public void setId(int id) {
        this.id = id ;
    }
}

class child extends parent {
    public  void test() {
        System.out.println("Child");
    }

    static int id = 10 ;
    public int anotherId = 20 ;
}

public class methodOverRiding {
    public static void main(String[] args) {
        parent p = new parent();
        p.test();

        child c = new child();
        c.test();

        parent pc = new child();
        pc.test();

        System.out.println(c.anotherId) ;

    }
}
