#include "main.h"

void simpleCalc()
{
	int left;
	int right;
	char operation;

	scanf("%d", &left);
	scanf(" %c", &operation);
	scanf("%d", &right);
	printf("%d %c %d\n", left, operation, right);
	if (operation == '+')
		printf("%d\n", left + right);
	else if (operation == '-')
		printf("%d\n", left - right);
	else
		printf("Sorry, no such operation: \"%c\"\n", operation);
}