#include<stdio.h> 


int main()
{
	int a[10], n, i, j, k, temp;
	printf("Enter size of array or list: \n");
	scanf_s("%d", &n);
	printf("Enter values in the array: \n");
	for (i = 0;i < n;i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("Array elements before sorting: \n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}

	/*insertion sort:
	n = number of elements in array.
	temp = temporary variable which we want to insert into
	already sorted array
	 k= total number of passes.
	j = control variable used for internal comparison*/
	for (k = 0; k < n; k++)
	{
		temp = a[k];
		j = k - 1;
		while ((a[j] > temp) && (j >= 0))
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
	printf("\nArray elements After insertion sort:\n");
	for (i = 0;i < n;i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}