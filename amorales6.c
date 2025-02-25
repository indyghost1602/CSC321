//anthony morales
//CSC321
//Lab #6

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int x = 10;
	int y = 22;

	int ans1 = x+y*x/y-x;
	int ans2 = -x-y/x*y+x;
	int ans3 = x+y-x/y;

	printf("x+y*x/y-x = %d\n", ans1);
	printf("-x-y/x*y+x = %d\n", ans2);
	printf("x+y-x/y = %d\n", ans3);
}
