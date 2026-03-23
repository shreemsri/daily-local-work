interface Animal {
    default void sound() {
        System.out.println("Animal makes sound");
    }
}

class Dog implements Animal {
    // No need to override sound()
}

public class ada1 {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.sound();
    }
}