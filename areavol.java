import java.util.Scanner;

public class areavol{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double radius = input.nextDouble();
        double len = input.nextDouble();

        double area = (radius*radius*22/7);
        double vol = (area*len);

        System.out.println(area);
        System.out.println(vol);
    }

}
