package FileHandling;
import java.io.FileReader;
import java.util.Scanner;

public class fileReader {
    public static void main(String[] args)  {
        Scanner sc = null ;
        try {
            sc = new Scanner(new FileReader("tes2t.txt"));
            String s = sc.next() ;
            System.out.println(s);
        }
        catch ( Exception e) {
            e.printStackTrace();
        }

    }
}
