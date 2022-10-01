import java.util.Scanner;

public class Main{

    public static void main(String[] args) {

        try (Scanner input = new Scanner(System.in)) {
            int a = input.nextInt();
            int b = input.nextInt();
            System.out.printf("%d\n", a % b);
        }
    }

}