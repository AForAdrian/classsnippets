import java.util.Scanner;

public class students{
  
  public static void main(self, String[] args){
    Scanner read = new Scanner(system.in);
    int numStuds;
    Sting name;
    int score;
    int x=0;
    
    system.out.println("Enter the number of studnets");
    numStuds = read.nextInt();
    
    while(x<=numStuds){
      system.out.println("Enter the number of studnets");
      self.name = read.nextString();
      system.out.println("Enter the number of studnets");
      self.score = read.nextInt();
      x++;
    }
    
}

import java.util.Scanner;
import java.util.Arrays;

public class array{
	public static void main(String[] args){
		Scanner read = new Scanner(System.in);
		int x = 0;
		int[] score = {};
		while(x<3){
			score = Arrays.copyOf(score, score.length+1);
			score[score.length-1] = read.nextInt();
			System.out.println(score[x]);
		}
		System.out.println(score.length);	
	}
}
