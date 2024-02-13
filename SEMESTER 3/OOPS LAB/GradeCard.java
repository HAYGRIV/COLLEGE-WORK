import java.util.Scanner;

public class GradeCard
{
    public static void main(String[] args)
    {
        while(true)
        {
            Scanner scan = new Scanner(System.in);
            System.out.println("\nEnter Your Name: ");
            String name = scan.nextLine();
            System.out.println("Enter Your Age: ");
            int age = scan.nextInt();
            System.out.println("Enter Your OOPS Marks(Out of 100): ");
            int oops = scan.nextInt();
            char grade;
            System.out.println("\nName: " + name);
            System.out.println("\nAge: " + age);
            if(oops >= 85 && oops <= 100)
            {
                grade = 'O';
                System.out.println("OOPS Grade: " + grade);
            }
            else if(oops >= 75 && oops <= 84)
            {
                grade = 'A';
                System.out.println("OOPS Grade: " + grade);
            }
            else if(oops >= 65 && oops <= 74)
            {
                grade = 'B';
                System.out.println("OOPS Grade: " + grade);
            }
            else if(oops >= 55 && oops <= 64)
            {
                grade = 'C';
                System.out.println("OOPS Grade: " + grade);
            }
            else if(oops >= 45 && oops <= 54)
            {
                grade = 'D';
                System.out.println("OOPS Grade: " + grade);
            }
            else if(oops >= 35 && oops <= 44)
            {
                grade = 'E';
                System.out.println("OOPS Grade: " + grade);
            }
            else if(oops < 35)
            {
                grade = 'F';
                System.out.println("OOPS Grade: " + grade);
            }
            else
            {
                System.out.println("Invalid Input!!");
            }
            System.out.println("Do you want to try again? (Kindly answer Yes/No): ");
            Scanner sc = new Scanner(System.in);
            String ch = sc.nextLine();
            if (ch.equals("No"))
            {
                break;
            }
            else if (ch.equals("Yes"))
            {
                continue;
            }
            else
            {
                System.out.println("Invalid Input, restarting program...");
            }
        }
    }
}