import java.util.Scanner;
import java.util.Arrays;

public class studClass{
    public static int max(int[] t) {
        int max= t[0];   
        for (int i=1; i<t.length; i++) {
            if (t[i] > max){
                max= t[i];   
           }
        }
        return max;
    }
   public static int getSecondLargest(int[] a, int total){
        Arrays.sort(a);
        return a[total-2];
   }
    public static void main(String[] args) {
        int numStuds;
        int count = 0;
        
        Scanner read = new Scanner(System.in);
        System.out.println("Declare number of studs here:");
        numStuds = read.nextInt();
        String []studNames = new String[numStuds];
        int []scoreArray = new int [numStuds];
        
        for (count = 0; count < numStuds; count++){
            read.nextLine();
            System.out.println( "Emter student name");
            studNames[count] = read.nextLine();
            
            System.out.println("Enter Score");
            scoreArray[count]= read.nextInt();
        }
        System.out.println("Max score is: " + maximum(scoreArray));
        System.out.println("2nd score is: " + getSecondLargest(scoreArray));
    }  
}
