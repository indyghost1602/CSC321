// Anthony Morales
//
import java.util.Scanner;

public class amorales4
{
	public static void main(String[] args)
	{
		int x = 0;
		System.out.println("choose an option (1-4)");
		Scanner userinput = new Scanner(System.in);
		x = userinput.nextInt();

		if(x == 1)
		{
			System.out.println("You choose option 1! nice!");
		}
		else if(x == 2)
		{
			System.out.println("You choose option 2! incredible!");
		}
		else if(x == 3)
		{
			System.out.println("You chose option 3! awesome!");
		}
		else if(x == 4)
		{
			System.out.println("You chose option 4! perfect!");
		}
	}
}
