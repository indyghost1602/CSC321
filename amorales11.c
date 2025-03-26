//anthony morales
//csc321
//lab 11

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hypotTriangle(int base, int height);

int main(void)
{
	int base, height;
	double result;

	printf("enter the base of your triangle: ");
	scanf("%d", &base);

	printf("enter the height of your triangle: ");
	scanf("%d", &height);

	result = hypotTriangle(base, height);

	printf("the hypotenuse of your triangle is: %lf \n", result);
	
	return EXIT_SUCCESS;
}

double hypotTriangle(int base, int height)
{
	double x = sqrt((base *base) + (height * height));
	return x;
}
