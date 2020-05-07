import java.util.Scanner;

public class celFah{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
	
	double cel;
	cel = input.nextDouble();
        System.out.println(conv(cel));
}
    public static double conv(double celcius){
         return ((9/5)*celcius+32);
}
}
