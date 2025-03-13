//anthony morales
//CSC321
//lab 9 java code


import java.util.Scanner;

public class amorales9j
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		int rand = (int) (Math.random() * 20) + 1;
		int guess = 0;

		System.out.println("guess a number between 1-20");
		

		while(true)
		{
			if (input.hasNextInt())
			{
				guess = input.nextInt();

			if(guess < 1 || guess > 20)
			{
				System.out.println("you input a number that is out of range. re-enter a valid number");
				continue;
			}
			
			if (guess == rand)
			{
				System.out.println("you won and guessed the number correctly!");
				for(int i = 0; i < guess; i++)
				{
					System.out.println("you won and guessed the number correctly!");
				}
				break;
			}
			else
			{
				if(guess > rand)
				{
					System.out.println("you lost and your guess is higher than my number which was " + rand + ". Try again! ");
				}
				else
				{
					System.out.println("you lost and you guess is lower than my number which was " + rand + ". Try again! ");
				}
			}
		}
	}
}
}
			
