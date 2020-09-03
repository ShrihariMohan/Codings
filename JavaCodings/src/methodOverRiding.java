class parent {
    public Integer test() {
        System.out.println("Parent");
        return 10 ;
    }
}

class child extends parent {
    public Integer test() {
        System.out.println("Child");
        return 10;
    }
}

public class methodOverRiding {
    public static void main(String[] args) {
        parent p = new parent();
        p.test();

        child c = new child();
        c.test();

        parent pc = new child();
        pc.test();
    }
}
