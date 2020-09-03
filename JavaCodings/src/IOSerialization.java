import java.io.* ;

class dog implements Serializable{
    String name = "Sherlock" ; // instance
    Integer age = 10 ; //instance
    transient Integer key = 100 ;
    static String address = "221 Baker St" ;
    final  Integer change = 100 ; // replaced will be compiler
    //no runtime final variable
    transient  final Integer test = 10 ; // transiet is ignored
}
public class IOSerialization {
    public static void main(String[] args) throws Exception{
        dog he = new dog();
        FileOutputStream fos = new FileOutputStream("serial.txt");
        ObjectOutputStream oos = new ObjectOutputStream(fos) ;
        oos.writeObject(he); // no static variables will be there

        FileInputStream fis = new FileInputStream("serial.txt");
        ObjectInputStream ois = new ObjectInputStream(fis) ;
        dog serializedOutput = (dog) ois.readObject();

        System.out.println( "Name : " + serializedOutput.name + " Age: " + serializedOutput.age);
        System.out.println( "Add : " + serializedOutput.address + " Not from file only from memory\n" +
                "doesn't Participate in serialization" );
        System.out.println(" Key value is transient " +serializedOutput.key);



    }
}
