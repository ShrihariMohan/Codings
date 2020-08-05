import java.util.* ;

public class MaximumSqMatrixWithMiddleElement {
        public static int row , col , mid , count;
        public static int rowInd , colInd ;
        public static int[][] mat = new int[50][50] ;

        public static void main(String[] args) {
            getInput() ;
            findIndex() ;
            count = getOutput() ;
            printOutput() ;

        }

        public static void  getInput() {
            Scanner sc = new Scanner(System.in);
            row = sc.nextInt();
            col = sc.nextInt() ;
            for ( int i = 0 ; i < row ; i ++) {
                for ( int j  = 0 ; j < col ; j++) {
                    mat[i][j] = sc.nextInt();
                }
            }
            mid = sc.nextInt();
            sc.close();
        }

        public static void findIndex() {
            for ( int i = 0 ; i < row ; i ++ ) {
                for ( int j = 0 ; j < col ; j ++) {
                    if  (mat[i][j] == mid) {
                        rowInd = i ;
                        colInd = j ;
                        return ;
                    }
                }
            }
        }

        public static int getOutput() {
            int left = colInd, right = colInd,
                    top = rowInd , bottom = rowInd ;
            int timesCount = 0 ;
            while ( left-- > -1 && right++ < col &&
                    top-- > -1 && bottom++ < row) {
                timesCount ++ ;
            }

            return timesCount ;
        }

        public static void printOutput() {
            for ( int i = rowInd - count+1 ; i < rowInd+count ; i ++) {
                for ( int j = colInd-count+1 ; j < colInd+count ; j ++) {
                    System.out.print(""+mat[i][j]+" ");
                }
                System.out.println();
            }
        }

}

/*
The Program must print the largest possible square sub-matrix having the middle
integer as X. Matrix always Contains one element of X.
Where X is the (Row+2)nd line Input.

Boundary:
Row and Col <= 50

Example Input/Output 1:
Input:
7 9
43 85 91 83 26 30 70 11 95
34 72 22 19 99 79 50 90 88
80 63 51 57 64 36 38 12 25
37 67 13 53 32 81 59 48 92
62 20 74 17 96 44 52 33 98
86 16 29 58 42 66 24 61 46
68 97 40 87 28 41 65 27 55
52

Output:
64 36 38 12 25
32 81 59 48 92
96 44 52 33 98
42 66 24 61 46
28 41 65 27 55

Explanation: The largest possible square sub matrix having 52 in its middle is shown Above.

Example Input/Output 2:
Input:
5 3
12 68 60
81 64 61
90 55 22
74 66 77
17 38 20 66

Output:
90 55 22
74 66 77
17 38 20

Example Input/Output 3:
Input:
4 4
65 38 90 44
87 85 92 75
51 61 41 77
25 99 67 48
65

Output:
65

 */