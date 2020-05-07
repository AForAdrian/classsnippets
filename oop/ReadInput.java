
package readinput;


import java.util.Scanner;

public class ReadInput{

    public static void main(String []args){
        Scanner input = new Scanner(System.in);
        int positive=0;
        int negative=0;
        int sum=0;
        int x;
        do{
            System.out.println("Enter the values to average:");
            x = input.nextInt();
            if(x>0){
                positive++;
            }
            else{
                negative++;
            }
            sum+=x;
        }while(x!=0);
        System.out.println(sum/((positive+negative)-1));
    }
}
