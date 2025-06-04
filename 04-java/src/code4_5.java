import java.util.InputMismatchException;
import java.util.Scanner;

public class code4_5 {
    public static void main (String[] args) {
        var sc = new Scanner(System.in);
        var x = 0;
        do {
            System.out.print("Enter an integer: ");
            try {
                x = sc.nextInt();
                if ( x <= 0) {
                    System.out.println("Input positive integer!");
                }
            } catch (InputMismatchException e) {
                System.out.println(e);
                sc.next();
            }
        }while (x <= 0);

        System.out.println("You entered: " + x);
        sc.close();
    }
}
