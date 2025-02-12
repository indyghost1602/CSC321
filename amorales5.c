// Anthony Morales
// CSC-321
// Lab #4


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i,x = 0;
	char l = 'a';
	double b = 1.5;
	float n = 0.33;
	int arr[10] = {2, 13, 14, 77, 23, 16, 78, 99, 21, 71};

	printf("the value of x is %d and it's address is %p \n",x,&x);
	printf("the value of l is %d and it's address is %p \n",l,&l);
	printf("the value of b is %f and it's address is %p \n",b,&b);
	printf("the value of n is %f and it's address is %p \n",n,&n);

	//{
	//	int y = 10;
	//}

	//printf("the value of y is %d and it's address is %p \n",y,&y);

	for(i = 0; i < 10; i++)
	{
		printf("address of arr[%d] = %p \n", arr[i], &arr[i]);
	}

	return EXIT_SUCCESS;
}
