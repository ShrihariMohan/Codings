package Concurrency;

class subThread extends  Thread {
    @Override
    public void run() {
        for (int i = 1; i <= 15; i++) {
            System.out.println("Sub Thread " + i);
        }
    }
}

public class threadsSample {
    public static void main(String[] args) {
        System.out.println("Started");
        //subthread
        subThread sub = new subThread();
        sub.start();
        for ( int i = 1 ; i <= 10 ; i ++) {
            System.out.println( "Main Thread " + i );
        }
        System.out.println("END");
    }
}
