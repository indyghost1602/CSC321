//anthony morales
//CSC321
//Lab#6

import java.util.Scanner;

public class amorales6
{
	public static void main (String[] args)
	{
		int x = 10;
		int y = 22;

		int ans1 = x+y*x/y-x;
		int ans2 = -x-y/x*y+x;
		int ans3 = x+y-x/y;

		System.out.println("x+y*x/y-x = " + ans1);
		System.out.println("-x-y/x*y+x = " + ans2);
		System.out.println("x+y-x/y = " + ans3);
	}
}
