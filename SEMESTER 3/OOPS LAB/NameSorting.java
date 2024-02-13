import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class NameSorting {
    public static void main(String[] args) {
        // Creating a list of names
        List<String> studentNames = new ArrayList<>();
        studentNames.add("Alice");
        studentNames.add("Bob");
        studentNames.add("Charlie");
        studentNames.add("David");
        studentNames.add("Eva");
        studentNames.add("Frank");
        studentNames.add("Grace");
        studentNames.add("Henry");
        studentNames.add("Ivy");
        studentNames.add("Jack");

        // Sorting in ascending order
        Collections.sort(studentNames);
        System.out.println("Names in Ascending Order: " + studentNames);

        // Sorting in descending order
        Collections.sort(studentNames, Collections.reverseOrder());
        System.out.println("Names in Descending Order: " + studentNames);
    }
}

