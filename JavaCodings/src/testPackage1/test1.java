package testPackage1;
import testPackage2.* ;
public class test1 {
    public static void main ( String[] args) {
        System.out.println("Package 1 ");
        test2 tp = new test2();
        tp.printing();
    }
}
