import java.util.List;
import java.util.Scanner;
import java.util.Collections;
import  java.util.ArrayList ;

public class FindMinSumInTheArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Integer len = sc.nextInt() ;
        ArrayList<Integer> li = new ArrayList<Integer>() ;
        Integer sum = 1 ;

        for ( int i =  0 ; i < len ; i ++) {
            li.add( sc.nextInt() ) ;
        }
        sc.close() ;
        Collections.sort(li);
        for ( int i = 1 ; i < len ; i ++) {
            if ( li.get(i-1)  != sum ) System.out.println(sum);
            sum = sum + li.get(i) ;

        }



    }
}

