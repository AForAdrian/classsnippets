import java.util.Scanner;
import java.lang.Math;

public class mathEqn {
    public static void main(String[] args) {
        int a;
        int b;
        int c;
        double aEqn1;
        double aEqn2;
        
        Scanner read = new Scanner(System.in);
        System.out.println("value of a:");
        a = read.nextInt();
        System.out.println("value of b:");
        b = read.nextInt();
        System.out.println("value of c:");
        c = read.nextInt();
        
        double discriminant = Math.pow(b,2) - (4*a*c);
        
        if(discriminant > 0){
            aEqn1 =  (-b + Math.sqrt(discriminant)) / (2 * a);
            aEqn2 =  (-b - Math.sqrt(discriminant)) / (2 * a); 
            System.out.println("R1 = " + aEqn1 + " and R2 = " + aEqn2);
        }
        else if ( discriminant == 0){
            aEqn1 =  (b + Math.sqrt(discriminant)) / (2 * a);
            System.out.println("R = " + aEqn1);
        }
        else{
            System.out.println(" “The equation has no real roots” ");
        }
        }
    }
    
