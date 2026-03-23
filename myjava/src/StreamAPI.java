import java.util.*;

public class StreamAPI {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<Integer>();
        for (int i = 0; i < 10; i++) {
            Scanner sc = new Scanner(System.in);
            int n= sc.nextInt();
            list.add(n);

        }
        list.stream().sorted().forEach(x -> System.out.println(x));

        for(int a: list){
            if(a%2==0){
                 System.out.println(a);
            }
            
        }
    }
}