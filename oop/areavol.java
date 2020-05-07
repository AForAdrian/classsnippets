import java.util.Scanner;
import java.lang.Math;

public class areavol{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double radius = input.nextDouble();
        double len = input.nextDouble();

        double area = (radius*radius*Math.pi);
        double vol = (area*len);

        System.out.println(area);
        System.out.println(vol);
    }

}
