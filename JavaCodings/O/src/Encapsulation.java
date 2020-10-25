 class Encapsulation {
    private int id ;
    private String name ;

    public  Encapsulation(int id , String name) {
        this.id = id ;
        this.name = name ;
    }

     public int getId() {
         return id;
     }

     public void setId(int id) {
         this.id = id;
     }

     public String getName() {
         return this.name;
     }

     public void setName(String name) {
         this.name = name;
     }
 }

class test {
    public static void main(String[] args) {
        Encapsulation en = new Encapsulation(1 , "udh");
        System.out.println(en.getName());
        en.setId(10);
        System.out.println(en.getId());
    }
}



