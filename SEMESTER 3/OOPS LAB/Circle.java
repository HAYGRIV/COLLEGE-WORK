import java.util.Scanner;

class Circle{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		float r;
		double area,circum;
		System.out.println("Enter Radius:");
		r = s.nextFloat();
		area = Math.PI * Math.pow(r,2);
		circum = 2 * Math.PI * r;
		System.out.println("Area of the Circle is: " + area);
		System.out.println("Circumference of the Circle is: " + circum);
	}
}