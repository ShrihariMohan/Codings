public class CJ7_ArraysPart2 {
    // 2 D array is called as Matrix
    /* Array of Arrays
    no of students - 4
    if all the people have different no of subjects
    then instead of matrix we can use array of arrays
    Memory wastage is not there

    Default values are 0 - every array is initialized with 0.
     */
    public static void main(String[] args) {
        int[][] x = new int[2][3];

        int student[][] = {{1 ,2 , 3 ,4} , {1,2} , {2}} ;
        for ( int i = 0 ; i < 3 ; i ++) System.out.println(student[i].length);

        /*
        sout x -> greek and latin
        sout x[0] -> greek and latin
        sout x[0][0] -> value , in this case 0

        int test[][] = new int [2][]
        sout test -> greek and latin
        sout test[0] -> null
        sout test[0][0] -> null pointer exception


        arr[5] where 5 is the size
        if we re calling arr[6] -> array index out of bounds exception : RE
        arr[2.5] -> possible loss of precision : CE


         */
    }

}
