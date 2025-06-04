import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class code4_6 {
    public static void main(String[] args) {
        Path path = Path.of("data/data.csv");
        try (var in = Files.newBufferedReader(path)) {
            String line;
            while ((line = in.readLine()) != null) {
                System.out.println(line);
            }
        }catch (IOException e) {
            e.printStackTrace();
        }
    }
}
