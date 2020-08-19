import java.util.*;

public class NmberThatContainsZero {

        public static void main(String[] args) {
            Integer start , end ;
            Scanner sc = new Scanner(System.in) ;
            start = sc.nextInt();
            end = sc.nextInt();
            boolean flag = true ;

            for ( Integer i = start ; i <= end ; i ++) {
                if (i.toString().contains("0")) {
                    System.out.print(i.toString() + " ");
                    flag = false  ;
                }
            }

            if ( flag ) {
                System.out.print(-1);
            }
        }
    }

    /*
    The Program must accept 2 integers as input X and Y
    The program must print the integers that contains 0.
    1 <= X < Y <= 10,00,000
    if no integer presents then -1 as output

    Sample 1
    Input - 98 115
    Output - 100 101 102 103 104 105 106 107 108 109 110

    Sample 2
    Input - 1135 1138
    Output - -1
     */
