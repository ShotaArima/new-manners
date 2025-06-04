import java.util.Scanner;

public class code4_1 {
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int amount;
        final var price = 150;

        System.out.print("How many do you need?:");
        amount = sc.nextInt();
        System.out.println("Total : %d yen".formatted(price * amount));

        sc.close();
    }
}
