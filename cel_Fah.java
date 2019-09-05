import java.util.Scanner;

public class cel_Fah{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double cel = input.nextDouble();

        double fah = ((9/5)*cel+32);
        System.out.println(fah);
    }

}
