//Anthony Morales
//CSC321
//Lab 10

import java.util.Scanner;

public class amorales10
{
	public static void main(String[] args)
	{
		int x = 0, y = 0, i = 0;
		double z = 0.0, radius = 0,height = 0;
		
		
		System.out.println("Enter the height of a cylinder: ");
		Scanner input = new Scanner(System.in);
		height = input.nextDouble();
		
		System.out.println("Enter the radius of a cylinder: ");
		radius = input.nextDouble();

		z = cylinderVolume(height, radius);

		System.out.println("The volume of a cylinder is : " + z);

	}

	static double cylinderVolume (double height, double radius)
	{
		double v = Math.PI * (radius * radius) * height;
		return v;
	}

}

