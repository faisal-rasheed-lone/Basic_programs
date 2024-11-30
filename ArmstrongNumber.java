import java.util.Scanner;
public class ArmstrongNumber {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Armstrong number is any number that is equal to the sum of its own
		//digits each raised to the power of the no. of digits 
		//e.g. 153 = 1^3 + 5^3 + 3^3 = 153 therefore its Armstrong 
		
		Scanner s = new Scanner(System.in); 
		
		int orgnumber, count = 0, res =0;
		
		System.out.println("Enter number"); // getting the number input
		orgnumber = s.nextInt();
		
		int number = orgnumber;		//preserving original number
		while(number > 0)			//getting count of digits
		{
			number = number / 10; 
			count++;	
		}
		
		int temp_count = count;		//preserving the count
		System.out.println("count = "+count);
		
		number = orgnumber;
		while(number > 0)
		{
			int a = 1;
			int r = number % 10;
			while(count>0) {		//getting the number raised to the power
				a = a*r;			//equal to count of digits
				count--;
			}
			count = temp_count;		//reassigning number for next digit
			res = res + a;
			number = number /10;
		}
		
		if(orgnumber == res)		//comparison
			System.out.println(orgnumber+" is an Armstrong number");
		else
			System.out.println(orgnumber+" is not an Arm strong number");
		
	}

}
