package Concurrency;

class subThreadUsingInterface implements  Runnable {
    public  void run() {
        for ( int i = 1 ; i <= 20 ; i ++) {
            System.out.println( "Sub Thread " + i );
        }
    }
}
public class runnableInterface {
    public static void main(String[] args) {
        System.out.println("Started");
        String s ;

        //subthread using Interface
        Runnable r = new subThreadUsingInterface();
        Thread sub = new Thread(r);
        sub.start();

        // we can also use daemon threadds
        //sub.setDaemon(true); to run along with main
        for ( int i = 1 ; i <= 15 ; i ++) {
            System.out.println("Main Thread " + i);
        }
        System.out.println("END");
    }
}
