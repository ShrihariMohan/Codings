class Car {
    private String name;
    private String engine ;
    private Integer cylinders ;
    private Integer wheels ;

    public Car(String name ,String engine, Integer cylinders) {
        this.name = name ;
        this.engine = engine;
        this.cylinders = cylinders;
        this.wheels = 4;
    }

    public  String getCar() {
        System.out.println("car name is " + name);
        return name ;
    }

    public String getEngine() {
        return engine;
    }
}

class Volkswagen extends Car {
    public Volkswagen() {
        super("Volkswagen", "Internal Combustible", 6);
    }
    public void acceleration () {
        System.out.println("Car Started and Accelerating");
    }

    public  void brake () {
        System.out.println("Car  Stopped");
    }
}

class Hyundai extends Car {
    public Hyundai() {
        super("Hyundai", "Internal Combustible + Straight", 8);
    }
    public void acceleration () {
        System.out.println( super.getCar() + "Car Started and Accelerating");
    }

    public  void brake () {
        System.out.println( super.getEngine() + "Car  Stopped");
    }
}


public class OopsConcepts {
    public static void main(String[] args)  {
            Car car = new Car("Innova", "combustible", 3);
            Hyundai hyundaiCar = new Hyundai();
            car.getCar();
            hyundaiCar.acceleration();
        }

}
