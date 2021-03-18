int cube(int n)
{
	return n * n * n;
}

int sumCubes(int *arr, int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++)
		sum += cube(arr[i]);
	return sum;
}