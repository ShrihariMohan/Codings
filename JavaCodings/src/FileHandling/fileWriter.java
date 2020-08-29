package FileHandling;

import java.io.FileWriter;
import java.io.IOException;

public class fileWriter {
    public static void main(String[] args) throws IOException {
        FileWriter local = null ;
        local = new FileWriter("test.txt") ;
        local.write("shrihari") ;
        local.close();

        // Try with resource
        try(FileWriter anotherLocal = new FileWriter("anotherTest.txt") ;
        ) {
            anotherLocal.write("shrihari") ;
        }
    }
}
