import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

public class code4_11 {
    public static void main(String[] args) {
        List<String> namelist = new ArrayList<>(
                List.of("Alice", "Bob", "Caroline", "David", "Eve"));
        namelist.sort(Comparator.naturalOrder());
        for(String person: namelist) {
            System.out.println(person);
        }
    }
}
