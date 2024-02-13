import java.util.Scanner;

class Demo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the starting number: ");
        int start = scanner.nextInt();

        System.out.print("Enter the ending number: ");
        int end = scanner.nextInt();

        if (start <= end) {
            for (int i = start; i <= end; i++) {
                int factorial = 1; 
                for (int j = 1; j <= i; j++) {
                    factorial *= j;
                }
                System.out.println("Factorial of " + i + " is " + factorial);
            }
        } else {
            System.out.println("Invalid input: Starting number should be less than or equal to the ending number.");
        }

        scanner.close();
    }
}
