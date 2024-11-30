import java.util.Scanner;
public class DisplayingDigits {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// program for displaying the digits of an integer number
		Scanner s = new Scanner(System.in);
	
		int number;
		System.out.println("Enter any number");
		number = s.nextInt();
		
		int count = 0; // for counting the digits 
		
		while(number > 0)
		{
			count++;
			int r = number % 10;
			number = number / 10;
			System.out.print(r +" ");	
		}
		System.out.println("count = "+count);

	}

}