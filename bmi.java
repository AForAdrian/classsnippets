import java.util.Scanner;

public class bmi{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double weight = input.nextDouble();
        double height = input.nextDouble();

        weight = weight* 0.45359237;
        height = height*0.0254;

        double bmi = (weight/(height*height));        
        System.out.println(bmi);
    }

}
