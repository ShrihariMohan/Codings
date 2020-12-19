public class CJ16_CodingStandards {
    /*
    Package name - client domain name in reverse
    class name - first Letter should be capital and then words start with caps - nouns
    method name - var name - methodName should be like this. camelCase
    constants - CONSTANTS_SEPERATED_WITH__

    Java Bean - POJO with Getter and setters and class name ends with bean but its not official
    from SUN

    boolean methods name - isEmpty() looks good than getEmpty()
     */

    public  static  void main( String[] args) {
        int ans = Calculator.summer(10, 20);
        System.out.println(ans);
    }
}

class Calculator {
    public  static int summer( int num1 , int num2) {
        return  num1 + num2 ;
    }
}

class TestBean {
    private int var1 ;
    private int var2 ;

    public int getVar1() {
        return var1;
    }

    public void setVar1(int var1) {
        this.var1 = var1;
    }

    public int getVar2() {
        return var2;
    }

    public void setVar2(int var2) {
        this.var2 = var2;
    }
}
