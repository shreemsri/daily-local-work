import java.util.function.IntUnaryOperator;

public class Main {
    public static void main(String[] args) {
        int n = 10; // Change this to any number

        // Lambda expression to calculate sum
        IntUnaryOperator sumCalc = (num) -> num * (num + 1) / 2;

        int result = sumCalc.applyAsInt(n);
        System.out.println("Sum of first " + n + " numbers is: " + result);
    }
}