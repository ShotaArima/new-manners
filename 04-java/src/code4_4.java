import java.util.Scanner;

public class code4_4 {
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        var x = 0;
        do {
            System.out.println("Enter in positive integer: ");
            x = sc.nextInt();
            if (x <= 0) {
                System.out.println("Input positive integer!");
            }
        } while (x <= 0);

        System.out.println("You entered" + x);
        sc.close();
    }
}
