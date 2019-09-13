
package number.pkg3.lab.pkg2.pkg0;

/**
 *
 * @author ndulaandy
 */
import java.util.Scanner;
public class Number3Lab20 {

    /**
     * @param args the command line arguments
     */
     public static int maximum(int[] t) {
        int maximum = t[0];   
        for (int i=1; i<t.length; i++) {
            if (t[i] > maximum) {
             maximum = t[i];   
            }
        
        }
        return maximum;
    }
    public static void main(String[] args) {
        // TODO code application logic here
        int NumberOfStudents;
        int count = 0;
        
        Scanner valarDohaeris = new Scanner(System.in);
        System.out.println("Insurt number of students:");
        NumberOfStudents = valarDohaeris.nextInt();
        String []studentClassNames = new String[NumberOfStudents];
        int []studentClassScore = new int [NumberOfStudents];
        
        for (count = 0;count < NumberOfStudents;count++){
            valarDohaeris.nextLine();
            System.out.println( " student's name");
            studentClassNames[count] = valarDohaeris.nextLine();
            System.out.println( " student's score");
            studentClassScore[count]= valarDohaeris.nextInt();
            
            
        }
        
         int maximum = maximum(studentClassScore);
         System.out.println( "maximum is :" + maximum);
    }
    
}
