#include "main.h"

void sumAll(int *arr, int len)
{
	printf("%d\n", sum(arr, len));
	printf("%d\n", sumSquares(arr, len));
	printf("%d\n", sumCubes(arr, len));
}