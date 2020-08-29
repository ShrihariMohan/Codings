package FileHandling;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

public class fileReader {
    public static void main(String[] args)  {
        Scanner sc = null ;
        try {
            sc = new Scanner(new FileReader("test.txt"));
            String s = sc.next() ;
            System.out.println(s);
        }
        catch ( Exception e) {
            e.printStackTrace();
        }

    }
}
