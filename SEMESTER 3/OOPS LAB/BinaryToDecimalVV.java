import java.util.Scanner;
public class BinaryToDecimalVV 
{ 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int choice;
        do {
            System.out.println("Choose an option:");
            System.out.println("1. Convert Binary to Decimal");
            System.out.println("2. Convert Decimal to Binary");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();
            switch (choice) {
                case 1:
                    System.out.print("Enter a binary number: ");
                    String binaryInput = scanner.next();
                    int decimalResult = binaryToDecimal(binaryInput);
                    System.out.println("Decimal equivalent: " + decimalResult);
                    break;
                case 2:
                    System.out.print("Enter a decimal number: ");
                    int decimalInput = scanner.nextInt();
                    String binaryResult = decimalToBinary(decimalInput);
                    System.out.println("Binary equivalent: " + binaryResult);
                    break;
                case 3:
                    System.out.println("Exiting the program.");
                    break;
                    default:
                    System.out.println("Invalid choice. Please choose again.");
            }
        } 
        while (choice != 3);
            scanner.close();
    }
    public static int binaryToDecimal(String binary) {
        return Integer.parseInt(binary, 2);
    }
    public static String decimalToBinary(int decimal) {
        return Integer.toBinaryString(decimal);
    }
}

        
    

