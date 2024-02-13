import java.util.Scanner;

class LargestNum{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		System.out.println("Enter Three Interger Values:");
		int a = s.nextInt();
		int b = s.nextInt();
		int c = s.nextInt();
		
		if(a>b && a>c){
			System.out.println("The Greatest Number is: " + a);
		}
		else if(b>a && b>c){
			System.out.println("The Greatest Number is: " + b);
		}
		else{
			System.out.println("The Greatest Number is: " + c);
		}
	}
}