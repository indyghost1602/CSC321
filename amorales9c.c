//anthony morales
//csc321
//lab9 (c program)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int guess = 0, i, x = 3, y;

	srand(time(NULL));

	y = (rand() % 20) + 1;

	while(guess < 1 || guess > 20)
	{
		printf("enter a number between 1 and 20\n");
		scanf("%d", &guess);
		
		if(guess < 1 || guess > 20)
		{
			puts("you input a number that is out of range (1-20). re-enter a valid number.\n");
		}
		else if(guess == y)
		{
			printf("you won and guessed the number correctly!\n");
			for(int i = 0; i < guess; i++)
			{
			printf("you won and guessed the number correctly! \n");
			}
		break;
		}
		else if(guess < y)
		{
			printf("you lost and your guess is lower than my number which is %d. \n", y);
		}
		else
		{
			printf("you lost and your guess is higher than my nuber which is %d. \n", y);
		}
	}


	return EXIT_SUCCESS;
}

