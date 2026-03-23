
@FunctionalInterface
interface Robot {
    
    void work();
    default void sayHello() {
        System.out.println("Hello! I am a robot.");
    }
    static void showBattery() {
        System.out.println("Battery is at 100%.");
    }
}

public class Method {
    public static void main(String[] args) {
        Robot myRobot = () -> System.out.println("I am cleaning the room.");
        
        myRobot.work();       
        myRobot.sayHello();  
        Robot.showBattery();  
    }
}