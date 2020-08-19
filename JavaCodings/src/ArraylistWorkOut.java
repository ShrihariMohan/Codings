import java.util.ArrayList;

public class ArraylistWorkOut {

    public static void main( String args[]) {
        ArrayList<Integer> arr = new ArrayList<Integer>() ;
        arr.add(1) ;
        arr.add(2) ;
        //System.out.println(arr.get(2)); Error Index Out Of bounds
        //System.out.println(arr.contains(4)); true or false
        System.out.println(arr);
//        arr.set(3,5);Error shhould be less tha length
//        arr.remove(5) ;
        
    }

}
