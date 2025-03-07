//Anthony Morales
//CSC321
//Exam1

import java.util.Scanner;

public class amorales_exam1
{
	public static void main (String[] args)
	{
		int x = 77;
		int userinput = 0;
		System.out.println("enter a number (0-100): ");
		Scanner num = new Scanner(System.in);
		userinput = num.nextInt();

		if (userinput == x)
		{
			System.out.println("you guessed correctly! You won a lifetime supply of oreo cookies!");
		}
		else
			System.out.println("you guessed incorrectly! try again!");
	}
}
