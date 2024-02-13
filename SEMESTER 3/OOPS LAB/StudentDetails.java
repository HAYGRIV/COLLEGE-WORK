import java.util.Scanner;

class StudentDetails{
	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		int roll;
		double per;
		String name;
		System.out.println("Enter Rollno:");
		roll = s.nextInt();
		System.out.println("Enter Percentage:");
		per = s.nextDouble();
		System.out.println("Enter Name:");
		name = s.next();
		System.out.println("Name is: " + name);
		System.out.println("Rollno is: " + roll);
		System.out.println("Percentage is: " + per);
	}
}