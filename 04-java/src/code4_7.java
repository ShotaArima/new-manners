import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class code4_7 {
    public static void main(String[] args) {
        List<String> nameList = new ArrayList<>(
                Arrays.asList("Alice", "Bob", "Caroline", "David", "Eve")
        );
        Scanner scanner = new Scanner(System.in);
        System.out.print("Search:");
        String searchName = scanner.nextLine();

        boolean found = false;
        for(String name : nameList) {
            if (name.equalsIgnoreCase(searchName)) {
                System.out.println("Found:"+searchName);
                found = true;
                break;
            }
        }
        if (!found) {
            System.out.println("Not found"+searchName);
        }

        scanner.close();
    }
}
