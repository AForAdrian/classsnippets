import java.util.Scanner;

public class areavol{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int sum = 0;
        int x;
        
        
        System.out.println("Enter num");
        while(num>0){
            x = num % 10;
            sum += x;
            num = num/10;
        }
        
        System.out.println(sum);
    }

}
