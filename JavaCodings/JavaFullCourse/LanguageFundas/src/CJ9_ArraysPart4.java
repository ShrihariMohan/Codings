public class CJ9_ArraysPart4 {
    public static void main(String[] args) {
        // Case 1 | 2 d Array
        int [] x = {10 , 20 , 30 , 40} ;
        char [] c = {'a' , 'b' , 'c' , 'd'} ;
        int []d = x ; // Valid
        // int [] ch = c ; Not Valid
        // Element level promotions are not applicable at array level
        // In object type
        // Child can be converted to parent object type

        //case 2
        int [] a = {1 , 2 ,4 , 3};
        int [] b = {1 , 2} ;
        a = b ; // valid
        b = a ; // Valid

        // Elements are not changed or copied
        // only reference changes
        // so happily working

        // case 3
        int [][]test = new int[2][] ;
        //test[0] = new int[10][20];
        // Dimensions should be matched
        // else CE
        // Sizes matching is optional
        // size doenst need to be matched
        // types compulsorily matched


        // case 4
        int test2[][] = new int[4][3] ; // 5 objects
        test2[0] = new int[2]; // 1 obj
        test2[1] = new int[1]; // 1 obj
        test2 = new int[3][2] ; // 4  obj

        // 11 objects are created
        // 7 objects are eligible for garbage collection 
    }
}
