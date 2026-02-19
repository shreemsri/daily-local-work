import java.util.Scanner;

public class triangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter side: ");
        double p = sc.nextDouble();

        double peri = 3 * p;

        System.out.println("Area of the circle = " + peri);
    }
}