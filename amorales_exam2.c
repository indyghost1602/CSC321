//Anthony Morales
//CSC321
//Midterm Exam2 C Program

#include <stdio.h>
#include <stdlib.h>

void name(int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("anthony morales \n");
	}
}

int main(void)
{
	int numTimes;

	printf("how many times do you want to print name? ");
	scanf("%d",&numTimes);

	name(numTimes);

	return EXIT_SUCCESS;
}
