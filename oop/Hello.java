import java.util.Scanner;
import java.lang.Math;
public class Hello{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int nyrs;
		int amt;
		double irate;
		System.out.println("Enter number of years:");
		nyrs = input.nextInt();
		System.out.println("Enter investment amt:");
		amt = input.nextInt(); 
		System.out.println("Enter interest rate:");
		irate = input.nextDouble();

		System.out.println(fiv(nyrs, amt, irate));			
}
	public static double fiv(int nyrs, int amt, double irate){
		return (amt*Math.pow((1+(irate/1200)), (nyrs*12)));		
}
}
