import java.util.Scanner;

public class exeptionres {

    public static void main(String[] args) {

        int[] arr = {21, 5, 67, 9, 90, 45, 23};
        int idx, a, ans = 0;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Index and value: ");

        try {
            idx = sc.nextInt();
            a = sc.nextInt();

            ans = arr[idx] / a;

        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Exception Occurred: " + e);

        } catch (ArithmeticException e) {
            System.out.println("Exception Occurred: " + e);

        } finally {
            System.out.println("Finally Block");
        }

        System.out.println("Ans = " + ans);
        sc.close();
    }
}