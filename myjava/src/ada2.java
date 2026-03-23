import java.util.*;

public class ada2 {

    public static void print(String s) {
        System.out.println(s);
    }

    public static void main(String[] args) {
        List<String> list = Arrays.asList("A", "B", "C");

        
        list.forEach(x -> print(x));

        
        list.forEach(ada2::print);
    }
}