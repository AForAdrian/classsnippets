package number.pkg1.lab.pkg2.pkg0;

import java.util.Scanner;
public class Number1Lab20 {
    
    public static int total (int[]number,int numberLength){
       int NumberInput;
        int total = 0;
        for(NumberInput = 0;NumberInput < numberLength;NumberInput++){
            total = total + number[NumberInput];
    }
    return total;
    }
    public static double average(int []number,int numberLength){
        int NumberInput;
        double mean = 1;
        int total = total(number, numberLength);
        for (NumberInput = 0;NumberInput < numberLength;NumberInput ++){
            
        }
        mean = (mean *total) / numberLength;
        return mean;
        
    }
    public static void main(String[] args) {
        // TODO code application logic here
        int NumberLength;int NumberInput;int total = 0; int countPositive = 0;int countNegative = 0;
        double mean = 1;
        Scanner input = new Scanner(System.in);
        System.out.println("Input number of elements");
        NumberLength = input.nextInt();
        int number[] = new int [NumberLength];
        for(NumberInput = 0;NumberInput < NumberLength;NumberInput ++){
            System.out.println("insurt your " + NumberInput + " number");
            number[NumberInput] = input.nextInt(); 
            if (number[NumberInput] > 0){
            countPositive++;
            }
            else if (number[NumberInput] < 0){
            countNegative++;
            }
        }    
        total = total + total(number,NumberLength);
        mean =  mean * average(number,NumberLength);
        System.out.println("positive count is: " + countPositive);
        System.out.println("negative count is: " + countNegative);
        System.out.println("total is ; "+ total);
        System.out.println("Average is; " + mean);
        
    }
    
}

