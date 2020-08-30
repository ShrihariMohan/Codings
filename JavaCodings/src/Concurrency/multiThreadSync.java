package Concurrency;

class subMultiThread1 extends Thread {
    printer p ;
    public subMultiThread1(printer p) {
        this.p = p ;
    }
   public void run() {
        
       try {
           p.print(1);
       } catch (InterruptedException e) {
           e.printStackTrace();
       }
   }
}

class subMultiThread2 extends Thread {
    printer p ;
    public subMultiThread2(printer p) {
        this.p = p ;
    }
    public void run() {
        try {
            p.print(2);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

class printer {
    synchronized void print(int threadName) throws InterruptedException {
        for (int i = 0; i < 10; i++) {
            Thread.sleep(500);
            System.out.println( threadName +" SUB Thread " + i);
        }
    }

}

public class multiThreadSync {
    public static void main(String[] args) {
        System.out.println("Start");

        //to use syncronize both threads should operate on same object
        printer p = new printer();
        subMultiThread1 smb1 = new subMultiThread1(p);
        subMultiThread2 smb2 = new subMultiThread2(p);
        smb2.start();
        smb1.start();

        for ( int i = 0 ; i < 10 ; i ++) {
            System.out.println("Main Thread " + i);
        }
        System.out.println("END");
    }
}
