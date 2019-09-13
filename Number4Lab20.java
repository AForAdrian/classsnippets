
package number.pkg4.lab.pkg2.pkg0;
import java.util.Scanner;
public class Number4Lab20 {

    public static void main(String[] args) {
        // TODO code application logic here
        int a;
        int b;
        int c;
        double AnswerOfEquationOne;
        double AnswerOfEquationTwo;
        Scanner valarDohaeris = new Scanner(System.in);
        System.out.println("value of a:");
        a = valarDohaeris.nextInt();
        System.out.println("value of b:");
        b = valarDohaeris.nextInt();
        System.out.println("value of c:");
        c = valarDohaeris.nextInt();
        double determinant = Math.pow(b,2) - (4*a*c);
        if(determinant > 0){
            AnswerOfEquationOne =  (-b + Math.sqrt(determinant)) / (2 * a);
          AnswerOfEquationTwo =  (-b - Math.sqrt(determinant)) / (2 * a); 
          System.out.println("R1 = " + AnswerOfEquationOne + " and R2 = " + AnswerOfEquationTwo);
        }
        else if ( determinant == 0){
            AnswerOfEquationOne =  (b + Math.sqrt(determinant)) / (2 * a);
            System.out.println("R = " + AnswerOfEquationOne);
        }
        else{
            System.out.println(" “The equation has no real roots” ");
        }
        }
    }
    
}
