import java.util.Scanner;

class Calculator{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		float a;
		float b;
		System.out.println("Enter First Number:");
		a = s.nextFloat();
		System.out.println("Enter Second Number:");
		b = s.nextFloat();
		System.out.println("Sum is: " + (a+b));
		System.out.println("Difference is: " + (a-b));
		System.out.println("Product is: " + (a*b));
		System.out.println("Division is: " + (a/b));
		System.out.println("Modulo is: " + (a%b));
	}
}